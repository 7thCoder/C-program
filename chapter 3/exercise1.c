/*
 * Name: @7thCoder
 * Description: This progran appends the string t to the end of the string s using pointers
 * Date: 14/07/2023
*/

#include <stdio.h>
#include <string.h>

void strct(char *s, char *t){

    while(*s!='\0'){
        s++;
    }

    while(*t!='\0'){
        *s+=*t;
        s++;
        t++;
    }

    *s='\0';
} 
 int main (void){
    char st1[]="Hello world ";
    char st2[]="i am a coder ";

    strct(st1,st2);

    // printf("concatenated string: %s",st1);
 }