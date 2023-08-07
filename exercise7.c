/*
 * Name: @7thCoder
 * Description: This program uses Double pointers to transpose a 2d Matrix
 * Date: 07/08/2023
*/

#include<stdio.h>
#include<stdlib.h>

void transpose(int** ar,int row,int col){
    int i,j;
    int temp[col][row];

    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            temp[i][j]=ar[j][i];
        }
    }

    printf("\nArray after transposing: \n");
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            printf("\t%d",temp[i][j]);
        }
        printf("\n");
    }

}

/*void printAr(int **arr,int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d",arr[i][j]);
        }
    }
} */

int main(){
    int row,col,i,j;

    printf("Enter number of rows: \n");
    scanf("%d",&row);

    printf("Enter number of columns: \n");
    scanf("%d",&col);

    int** matr=(int**)malloc(row* sizeof(int*));

    for(i=0;i<row;i++){
        matr[i]=(int*)malloc(col* sizeof(int));
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter element: ");
            scanf("%d",&matr[i][j]);
        }
    }

    printf("\nArray before transposing: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\t%d",matr[i][j]);
        }
        printf("\n");
    }

    transpose(matr,row,col);
    
    free(matr);
    for(i=0;i<row;i++){
        free(matr[i]);
    }

}