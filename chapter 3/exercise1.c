#include <stdio.h>
#include <string.h>

void strctr(char *s, char *t) 
{ 
    while (*s != '\0') 
        s++; 

    while (*t != '\0') { 
        *s = *t; 
        s++; 
        t++; 
    } 

    *s = '\0'; 
} 

int main() 
{ 
    char s[] = "Hello wordl"; 
    char t[] = "I am a coder"; 

    strctr(s, t); 

    printf("Concatenated string: %s", s); 

    return 0; 
} 
