/*
 * Name: @7thCoder
 * Description: This program checks if the string t occurs at the end of string S and returns 1 or 0 otherwise
 * Date: 18/07/2023
*/

#include <stdio.h>

int stend(char *s, char *t){


    while(*s!='\0'){
        s++;
    }
    s--;

    while(*t!='\0'){
        *t++;
    }
    t--;

    if(*t==*s){
        return 1;
    }
    else{
        return 0;
    }

}

int main (void){

    char st1[]="Helmo";
    char st2[]="o";

    printf("%d",stend(st1,st2));

}