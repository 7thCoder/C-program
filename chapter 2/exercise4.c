//This program replaces tabs with /t in a sentence
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
            case'\n':
                t[j] ='\\';
                t[j+1]='n';
            default: 
                t[j]=s[j];
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

    escape(c,d,len);
    printf(" %s",d);
}