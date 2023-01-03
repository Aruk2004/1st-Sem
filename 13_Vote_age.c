//  program to determine whether a candidate’s age is eligible for casting a vote or not

#include <stdio.h>
int main()
{
  int vote_age;

  printf("Input the age of the candidate : ");
  scanf("%d",&vote_age);
  if (vote_age<18)
     {
       printf("Sorry, You are not eligible to caste your vote.\n");
     }
  else
  	 {  
     printf("Congratulations! You are eligible to cast your vote.\n");
	 }
  return 0;	 
}
