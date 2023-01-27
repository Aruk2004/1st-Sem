// C Program to calculate the sum of all the matrix elements

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

int sumMatrix(int matrix[][100], int rows, int cols) {
    int i, j, sum = 0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main()
{
    int matrix[100][100];
    int rows, cols, sum;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    readMatrix(matrix, rows, cols);

    sum = sumMatrix(matrix, rows, cols);

    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}

