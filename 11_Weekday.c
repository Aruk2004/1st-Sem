//C program to print the day name of the week

#include <stdio.h>

int main()
{
  int weekday;
  printf(" Please Enter the Day Number 1 to 7 :  ");
  scanf("%d", &weekday);
  
  if (weekday == 1)
  {
  	printf("\n Day no %d is Monday",weekday);  	
  }
	if ( weekday == 2 )
  {
  	printf("\n Day no %d is Tuesday",weekday);  	
  }  
  	if ( weekday == 3 )
  {
  	printf("\n Day no %d is Wednesday",weekday);  	
  } 
  	if ( weekday == 4 )
  {
  	printf("\n Day no %d is Thursday",weekday);  	
  } 
  	if ( weekday == 5 )
  {
  	printf("\n Day no %d is Friday",weekday);  	
  } 
  	if ( weekday == 6 )
  {
  	printf("\n Day no %d is Saturday",weekday);  	
  }   
  	if ( weekday == 7 )
  {
  	printf("\n Day no %d is Sunday",weekday);  	
  } 
  else
    printf("\n Please enter Valid Number between 1 to 7");
  
  return 0;
}
