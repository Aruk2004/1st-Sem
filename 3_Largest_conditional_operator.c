// C Program to Find the Largest Number using Conditional Operator

#include<stdio.h>
int main()
{
    int num1,num2,max;
 
    // Taking input from the user
    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);
 
    // Using the conditional Operator to calculate the Maximum 
    max = num1>num2 ? num1 : num2;
    printf("Larger of %d and %d is %d \n", num1, num2, max);
    return 0;
}
