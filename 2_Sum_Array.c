// C program to find sum of array elements

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int array[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("Sum of the elements in the array is: %d", sum);
    return 0;
}

