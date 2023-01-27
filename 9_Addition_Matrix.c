// C program to find Addition of two matrix

#include <stdio.h>

void readMatrix(int matrix[][100], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrix(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void displayMatrix(int matrix[][100], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[100][100], matrix2[100][100], result[100][100];
    int rows, cols;

    printf("Enter the number of rows in the matrices: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrices: ");
    scanf("%d", &cols);

    printf("Enter elements of matrix 1:\n");
    readMatrix(matrix1, rows, cols);

    printf("Enter elements of matrix 2:\n");
    readMatrix(matrix2, rows, cols);

    addMatrix(matrix1, matrix2, result, rows, cols);

    printf("\nAddition of matrix 1 and matrix 2 is:\n");
    displayMatrix(result, rows, cols);

    return 0;
}

