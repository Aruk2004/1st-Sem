// C program to check alphabets using conditional operator

#include <stdio.h>

int main()
{
    char ch;
    
	//Taking Input from User
	
    printf("Enter any character: ");
    scanf("%c", &ch);
    
  	//Checking alphabet or not
  	
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("It is an ALPHABET")
        : printf("It is not an ALPHABET");

    return 0;
}
