//C program to accept two integers and check whether they are equal or not

#include <stdio.h>
int main()
{
    int n1, n2;
 
    printf("Enter the values for num1 and num2\n");
    scanf("%d %d", &n1, &n2);
    if (n1 == n2)
        printf("num1 and num2 are equal\n");
    else
        printf("num1 and num2 are not equal\n");
    
    return 0;
}
