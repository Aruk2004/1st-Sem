// C program to check uppercase or lowercase alphabets

#include<stdio.h>
int main()
{
     char c;
     
     //Inputting Character
     printf ("Enter a character n :");
     scanf ("%c", &c);

	//Checking Uppercase or Lowercase
     if (c>='A' && c<='Z')
     {
        printf ("It is uppercase Alphabet");
     }
     else if (c>='a' && c<='z')
     {
        printf ("It is lowercase Alphabet");
     }
     else
     {
     	printf ("It is not an Alphabet");
	 }
     
     return 0;

}
