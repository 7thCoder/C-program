//This program compares sentences and returns the longest sentence
#include <stdio.h>

main(){
    char s[1000],c,a;
    char lng[1000];
    int i,j,n,max,len;
    max=0;
    printf("press enter twice to compare the sentences \n");
    while((a=getchar())!=EOF && a!='\n'){
        i=0;
        while((c=getchar())!=EOF && c!='\n'){
        i++;
        s[i]=c;
        }
        if(max<i){
            max=i;
            for(j=0;j<=i;j++){
                lng[j]=s[j];
            } 
        }
    }
	printf("The longest sentence here is:\n%s and has exactly %d characters",lng ,max);   
}