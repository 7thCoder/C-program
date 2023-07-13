//This program takes an array of characters and returns them in opposite order
#include <stdio.h>

char word[],c;
int i=1,len;

int main(){
    while((c=getchar())!=EOF && c!='\n'){
        word[i]=c;
        i++;
        len=i;
    }
   
    while(len!=0){
        printf("%c",word[len]);
        len--;
    }
}