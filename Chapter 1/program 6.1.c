#include <stdio.h>

#define IN 1
#define OUT 0

void remove_comments(){

    int c, state, quote;

    state = OUT;
    quote = OUT;

    while((c=getchar())!=EOF){
        if(state==OUT){ //if we are outside a comment (State=OUT)
            if(c=='/'){ // if we ecnounter a slash
                c=getchar(); // get user input
                if((c=='*')){ // if we encounter an asterisk
                    state=IN;
                }
                else if((c=='/')){ // else if we encountr a slash
                    c=getchar();
                    putchar('\n');
                }
                else{
                    putchar('/');
                    putchar(c);
                }
            }
            else{
                putchar(c);
            }
        }
        else{ // if we are in a comment (State==IN)
            c=getchar();
            if((c=='*')){
                c=getchar();
                if((c=='/')){
                    putchar('\n');
                }
                else{
                    state=OUT;
                }
            }
            else{
                state=OUT;
            }
        }
    }
}

int main(){
    remove_comments();
    return 0;
}