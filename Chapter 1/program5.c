//This program folds long lines exceeding the column count into shorter lines 

#include <stdio.h>
#define ColCount 10

main(){
    char c;
    int i;
    i=0;
    
    while((c=getchar())!=EOF && c!='\n'){
        putchar(c);
        i++;
        if((i==ColCount)){
            putchar('\n');
            i=0;
        }
    }

}