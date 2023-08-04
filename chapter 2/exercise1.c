/*
 * Name: @7thCoder
 * Description: This program converts hexadecimal numbers to their decimal equivalent
 * Date: 12/07/2023
*/

#include<stdio.h>
#include<ctype.h>

int todec(char c){ //this function convers the letters to their decimal equivalent
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

int htoi(char s[]){ // this function converts the hexadecimal input to the integer 
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
