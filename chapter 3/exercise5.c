/*
 * Name: @7thCoder
 * Description: This program uses pointers to functions to perform addition, subtraction and multiplication
 * Date: 04/08/2023
*/

#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int Operation(int a,int b, int (*pointer)(int, int)){

    return pointer(a,b);
}

int main(){

    int a, b, c, choice;

    int(*pta)(int, int); //pointer to function

    printf("Enter first integer: ");
    scanf("%d",&a);

    printf("Enter Second integer: ");
    scanf("%d",&b);

    printf("Choose operation: \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    scanf("%d",&choice);

    switch (choice){
        case 1:
            pta = add;
            break;
        case 2:
            pta = subtract;
            break;
        case 3:
            pta = multiply;
            break;
        default:
            printf("Error select correct number");
            break;

    }

    printf("The result is: %d ",Operation(a,b,pta));
    
    return 0;
}