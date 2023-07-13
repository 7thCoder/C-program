/*This program finds all occurence of a particular character 
in a sentence and returns their position*/

#include <stdio.h>

#define MAX 40 //represents the maximum size of an array

void any(char a[],char b){
    int i,j;
    i-0;

    while(i!=MAX){
        if(a[i] == b){
            printf("%c is found at position %d in %s \n",b ,i+1 ,a);
        } 
  
        i++;
    }

}

int main(){
    char c[MAX];
    char d;
    char cc;
    int i;
    i=0;

    printf("Enter the sentence \n");
    while((cc=getchar())!=EOF && cc!='\n'){
        c[i]=cc;
        i++;
    }

    printf("Enter character to find \n");
    scanf(" %c",&d);

    any(c,d);
    
}