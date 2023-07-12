//This program converts letters to their decimal values

#include<stdio.h>
#include<ctype.h>

int todec(char c){
    if(isdigit(c)){
        return c - '0';
    }
    else if(isupper(c)){
        return c- 'A' + 10;
    }
    else{
        return c - 'a' +10;
    }
}

int htoi(char s[]){
    int i, n;
    n=0;
    while(isxdigit(s[i])){
        n += n * 16 + todec(s[i]);
        i++;
    }
    return n;
}

int main(){
    
    char ch[1000];
    int c,count;
    count=0;
    
    printf("Enter the hexadecimal value \n");

    while((c=getchar())!=EOF && c!='\n'){
        ch[count]=c;
        count++;
    }


    printf("%s to decimal is: %d",ch ,htoi(ch));
    
}