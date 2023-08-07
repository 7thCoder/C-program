/*
 * Name: @7thCoder
 * Description: This program uses Double pointers to find the maximum element in a 2D array
 * Date: 07/08/2023
*/

#include <stdio.h>
#include <stdlib.h>

int findMax(int** ar, int rows, int cols) {
    int Max = ar[0][0];

    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (ar[i][j] > Max) {
                Max = ar[i][j];
            }
        }
    }

    return Max;
}

int main() {
    int row, col, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int** arr = (int**)malloc(row * sizeof(int*));

    for (i = 0; i < row; i++) {
        arr[i] = (int*)malloc(col * sizeof(int));
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The maximum is: %d\n", findMax(arr, row, col));

    // Free the memory for the 2D array
    for (i = 0; i < row; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
