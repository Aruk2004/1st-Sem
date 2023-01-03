// C Program to find the largest number among three numbers

#include <stdio.h>
 
int main()
{
    int Num1, Num2, Num3;
 	
	 // Taking input from the user
    printf("Enter the three numbers : ");
    scanf("%d %d %d", &Num1, &Num2, &Num3);
    
 	//Checking which number is largest
    if (Num1 >= Num2 && Num1 >= Num2)
        printf("%d is the largest number.", Num1);
 
    if (Num2 >= Num1 && Num2 >= Num3)
        printf("%d is the largest number.", Num2);
 
    if (Num3 >= Num1 && Num3 >= Num2)
        printf("%d is the largest number.", Num3);
 
    return 0;
}
