//C Program to Calculate the factorial of a number using recursion

#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factorial = %d", factorial(num));

    return 0;
}

