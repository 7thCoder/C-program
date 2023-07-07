//This program replaces space with tab
#include <stdio.h>
#define Tabspace 5

 main (){
    int c;
    int i;

    while((c=getchar())!=EOF){
        if (c==' '){
            for(i=0;i<Tabspace;i++){
                putchar('\t');
            }
        }
        else{
            putchar(c);
        }
    }
}