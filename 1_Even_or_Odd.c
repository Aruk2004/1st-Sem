// C Program to check whether an integer entered by the user is odd or even

#include <stdio.h>
int main() 
{
    int num;
    
    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Checking if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}

