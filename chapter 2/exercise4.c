//This program replaces tabs with /t in a sentence
//and replaces spaces with tabs
#include <stdio.h>

#define MAX 50

void escape(char s[],char t[], int i){
    int j;
    for(j=0; s[j]!='\n' ;j++){
        switch (s[j]){
            case'\t':
                t[j]='\\';
                t[j+1]= 't';
                break;
            default: 
                t[j]=s[j];
        }

    }
}

void unescape(char s[]){
    int j;
    for(j=0; s[j]!='\n' ;j++){
        switch(s[j]){
        case ' ':
            s[j]='\t';
            break;
        default:
            ;
        }
    }
}

int main(){

    char cc;
    int len=0;
    char c[MAX];
    char d[MAX];

    printf("Enter the sentence \n");
    while((cc=getchar())!=EOF && cc!='\n'){
        c[len]=cc;
        len++;
    }

    // escape(c,d,len);
    // printf(" %s",d);

    unescape(c);
    printf(" %s",c);
}