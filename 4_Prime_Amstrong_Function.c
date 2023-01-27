// C program to Check prime and Armstrong number by making functions

#include <stdio.h>
#include <math.h>
int isPrime(int num)
{
    int i;

    if (num <= 1)
        return 0;
    for (i = 2; i < num; i++) 
	{
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int isArmstrong(int num) 
{
    int originalNum, remainder, result = 0;
    int n = 0;
    originalNum = num;

    while (originalNum != 0) 
	{
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) 
	{
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num) == 1)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    if (isArmstrong(num) == 1)
        printf("%d is an armstrong number\n", num);
    else
        printf("%d is not an armstrong number\n", num);

    return 0;
}

