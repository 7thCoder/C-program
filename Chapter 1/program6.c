// //This program finds and deletes comments in a C program
// #include <stdio.h>
// #define LIMIT 1000

// int main(){
//     char word[1000],a,c;
//     int i,len;
//     while((a=getchar())!=EOF && a!='\n'){
//         while((c=getchar())!=EOF && c!='\n'){
//         if(c="//"){
//             for(i=0;i<=len;i++){
//                 word[i]=" ";
//             }
//         }
//         else{
//             word[i]=c;
//         }
//         i++;
//         len=i;
//         }
//     }
//     printf("%s",word);
// }

// #include <stdio.h>
// #include <stdbool.h>

// int main(){
//     bool find = false;
//     char word[];

//     (while(c=getchar())!=EOF && )

// }

#include <stdio.h>

#define IN 1
#define OUT 0

/* This function removes all comments from a C program */
void remove_comments()
{
    int c, state, quote;

    state = OUT; /* state indicates whether we are inside a comment or not */
    quote = OUT; /* quote indicates whether we are inside a quoted string or not */

    while ((c = getchar()) != EOF) /* read each character until end of file */
    {
        if (state == OUT) /* if we are outside a comment */
        {
            if (c == '"') /* if we encounter a double quote */
            {
                if (quote == OUT) /* if we are outside a quoted string */
                {
                    quote = IN; /* enter the quoted string */
                }
                else /* if we are inside a quoted string */
                {
                    quote = OUT; /* exit the quoted string */
                }
                putchar(c); /* print the double quote */
            }
            else if (c == '\'') /* if we encounter a single quote */
            {
                putchar(c); /* print the single quote */
                c = getchar(); /* read the next character */
                putchar(c); /* print the next character */
                if (c == '\\') /* if the next character is a backslash */
                {
                    c = getchar(); /* read the next character */
                    putchar(c); /* print the next character */
                }
                c = getchar(); /* read the next character */
                putchar(c); /* print the next character, which should be a single quote */
            }
            else if (c == '/') /* if we encounter a slash */
            {
                c = getchar(); /* read the next character */
                if (c == '*') /* if the next character is an asterisk */
                {
                    state = IN; /* enter the comment */
                }
                else /* if the next character is not an asterisk */
                {
                    putchar('/'); /* print the slash */
                    putchar(c); /* print the next character */
                }
            }
            else /* if we encounter any other character */
            {
                putchar(c); /* print the character */
            }
        }
        else /* if we are inside a comment */
        {
            if (c == '*') /* if we encounter an asterisk */
            {
                c = getchar(); /* read the next character */
                if (c == '/') /* if the next character is a slash */
                {
                    state = OUT; /* exit the comment */
                }
            }
        }
    }
}

/* This is the main function that calls remove_comments() */
int main()
{
    remove_comments(); /* call remove_comments() on the input program */

    return 0;
}

