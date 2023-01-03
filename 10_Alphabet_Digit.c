//C program to check whether a character is an alphabet, digit, or special character

#include <stdio.h>

int main()
{
    char ch;

    //Inputting character  
    printf("Enter any character: ");
    scanf("%c", &ch);


    // Checking if Alphabet or Digit
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}
