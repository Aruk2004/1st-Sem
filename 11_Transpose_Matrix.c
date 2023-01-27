// C Program to find the Transpose of a Matrix

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

void transposeMatrix(int matrix[][100], int transpose[][100], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
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
    int matrix[100][100], transpose[100][100];
    int rows, cols;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    readMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transpose, rows, cols);

    printf("\nThe transpose of the matrix is:\n");
    displayMatrix(transpose, cols, rows);

    return 0;
}

