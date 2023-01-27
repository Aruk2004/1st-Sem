// C Program to find Multiplication of two matrix

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

void multiplyMatrix(int matrix1[][100], int matrix2[][100], int result[][100], int rows1, int cols1, int rows2, int cols2) {
    int i, j, k;
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
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
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows in matrix 1: ");
    scanf("%d", &rows1);

    printf("Enter the number of columns in matrix 1: ");
    scanf("%d", &cols1);

    printf("Enter the number of rows in matrix 2: ");
    scanf("%d", &rows2);

    printf("Enter the number of columns in matrix 2: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Error: Number of columns in matrix 1 should be same as number of rows in matrix 2 for matrix multiplication.");
        return 0;
    }

    printf("Enter elements of matrix 1:\n");
    readMatrix(matrix1, rows1, cols1);

    printf("Enter elements of matrix 2:\n");
    readMatrix(matrix2, rows2, cols2);

    multiplyMatrix(matrix1, matrix2, result, rows1, cols1, rows2, cols2);

    printf("\nMultiplication of matrix 1 and matrix 2 is:\n");
    displayMatrix(result, rows1, cols2);
    
return 0;
}

