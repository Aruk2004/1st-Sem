//C program to check leap year using conditional Operator

#include <stdio.h>

int main()
{
    int year;
 
    // Taking Input year from user
     
    printf("Enter any year: ");
    scanf("%d", &year);

	// Checking Leap Year or not
	
    (year%4==0 && year%100!=0) ? printf("LEAP YEAR") :
        (year%400 ==0 ) ? printf("LEAP YEAR") : printf("COMMON YEAR");

    return 0;
}
