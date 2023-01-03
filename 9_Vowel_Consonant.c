//C program to check entered character vowel or consonant

#include <stdio.h>
int main() {
    char ch;
    
    //Inputting Character
    printf("Enter a character: ");
    scanf("%c", &ch);

	//Checking if Vowel or Consonant
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
    	 if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')  
		{
		printf("\n %c is a VOWEL.", ch);
		}
    	 else
	 	{
    	printf("\n %c is a CONSONANT.", ch);
		}	
	}
   
    else
    {
        printf("\n %c is not an alphabet.", ch);
	}
    return 0;
}
