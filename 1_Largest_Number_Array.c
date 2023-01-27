//C Program to find the largest element of given array.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    printf("The largest element in the array is %d", max);
    return 0;
}

