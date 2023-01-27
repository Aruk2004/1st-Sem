// C program to Find the sum of natural numbers using recursion

#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n-1);
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Sum = %d", sum(num));

    return 0;
}

