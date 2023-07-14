//This program completes a sequence of numbers or letters
// It has many limitations so check out version 5.1

#include<stdio.h>

void expand(char s1[], char s2[]){

    char i;
    int j;

        if(s1[0]=='a' && s1[1]=='-'){
            for(i='a',j=0;i!='z';i++,j++){
                s2[j]=i;
            }
        }
        else if(s1[0]=='A' && s1[1]=='-'){
            for(i='A',j=0;i!='Z';i++,j++){
                s2[j]=i;
            }
        }
        else if (s1[0]=='0' && s1[1]=='-'){
            for(j=0;j!=26;j++){
                s2[j]+=j;
            }
        }
        else{
            printf("Oupps! Bug :-)");
        }

}

int main(){
     
     int i=0;
     char c;
     char s[100];
     char fin[100];

     printf("Enter sequence: \n");
     while((c=getchar())!=EOF && c!='\n'){
        s[i]=c;
        i++;
     }

     expand(s,fin);

     printf("%s",fin);
}