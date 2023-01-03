//C program to check number is positive, negative, or zero

#include <stdio.h>
 
int main()
{
    int Num;
 	
 	//Taking Input
    printf("Enter the number : ");
    scanf("%d", &Num);
 	
 	//Checking if Positive or Negative or Zero
    if (Num > 0)
        printf("%d is positive.", Num);
    else if (Num < 0)
        printf("%d is negative.", Num);
    else if (Num == 0)
        printf("%d is zero.", Num);
 
    return 0;
}
