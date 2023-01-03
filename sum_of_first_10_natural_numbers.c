//C program to find the sum of first 10 natural numbers.

#include <stdio.h>
int main()
 {
    int i, sum = 0;
    
    printf("The first 10 natural numbers are :");

    for (i = 1; i <= 10; ++i)
	{
		printf("%d ", i);
        sum = sum + i;
    }

    printf("\nThe Sum is : %d", sum);
    return 0;
}
