/*
 * Name: @7thCoder
 * Description: This C program dynamically creates an array of strings using pointers to pointers (double pointers). 
 * The program asks the user for the number of strings they want to store, allocates memory for the array,
 *  and then prompts the user to input each string. After that, the program displays all the strings in the array.
 * Date: 04/08/2023
 * 
 * 
 * Note: Do not use space of Tab when inputing strings
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 40

void dis(char* arr[], int num){
    int j,k;

    for(j=0;j < num;j++){
        k = strlen(arr[j]);
        char* len = (char*)malloc((k +1) * sizeof(char));
        strcpy(len,arr[j]);
        printf("String %d : %s \n",j,len);
        free(len);
    } 

}

int main (){

    int nm,i;

    char* ar[MAX];
    char* br[MAX];

    printf("Note: Do not use space or Tab when inputing strings \n");
    printf("How many strings will you enter: ");
    scanf("%d",&nm);

    for(i=0 ;i < nm;i++){
        ar[i] = (char*)malloc(MAX * sizeof(char));
        printf("Enter string %d ",i);
        scanf("%s",ar[i]);
        if(strlen(ar[i])>10){
            printf("Lenght of string too long");
            break;
        }
        else{
            br[i] = (char*)malloc(MAX * sizeof(char));
            strcpy(br[i],ar[i]);
        }
    }

    dis(br,nm);

     // Free allocated memory for ar and br
    for (i = 0; i < nm; i++) {
        free(ar[i]);
        free(br[i]);
    }

    return 0;
   
}