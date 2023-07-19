/*
 * Name: @7thCoder
 * Description: This program removes the specified character from the sentence entered
 * Date: 12/07/2023
*/

#include <stdio.h>

#define MAX 40 //represents the maximum size of an array

void squeez(char a[],char b){
    int i,j;
    i-0;
    j=0;

    while(i!=MAX){
        if(a[i] != b){
            a[j++]=a[i];
        }     
        i++;
    }

    printf("%s",a);
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

    printf("Enter character to delete: \n");
    scanf(" %c",&d);

    squeez(c,d);
    
}