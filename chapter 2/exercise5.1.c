/*
 * Name: @7thCoder
 * Description: check program 5 for description
 * Date: 14/07/2023
*/

#include <stdio.h>
#include <ctype.h>

#define MAX 100 //defines the maximum size of an array

void expand(char s1[], char s2[]){
    
    char i;
    int j,n;
    
    if(s1[0]>s1[2] || s1[1]!='-'){
        printf("Enter sequence in correct format (x-y) \n");
        printf("Make sure y is greater than x \n");
    }
    else if(s1[02]>s1[0]){
        if((isupper(s1[0]))){
            for(i=s1[0],j=0;i!=(s1[2]+1);i++,j++){
                s2[j]=i;
            }
        }
        else if((islower(s1[0]))){
             for(i=s1[0],j=0;i!=(s1[2]+1);i++,j++){
                s2[j]=i;
            }
        }
        else{
            printf("can't do numbers");
        }
    }
    else{
        printf("Oups! Bug");
    }
}

int main(){
    
    int i=0;
    char c;
    char s[MAX];
    char fin[MAX];

    printf("Enter sequence: \n");
    while((c=getchar())!=EOF && c!='\n'){
        s[i]=c;
        i++;
    }

    expand(s,fin);

    printf("%s",fin);
    
}