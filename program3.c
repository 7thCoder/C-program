#include<stdio.h>
#define tabwidth 10

int main(){
    int c;

    while((c=getchar())!=EOF){
        if(c=='\t'){
            for(int i=0;i<tabwidth;i++){
                putchar(' ');
            }
        }
        else{
            putchar(c);
        }
    }
    return 0;
}