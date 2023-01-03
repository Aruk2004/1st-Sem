//C program to display n terms of natural number and their sum.

#include <stdio.h>
int main()
 {
    int n , i, sum = 0;
    
    printf("Input your choice:");
    scanf("%d", &n);
    printf("The first %d natural number is :", n);

    for (i = 1; i <= n; ++i)
	{
		printf("%d ", i);
        sum = sum + i;
    }

    printf("\nThe Sum of Natural Numbers upto %d terms : %d",n , sum);
    return 0;
}
