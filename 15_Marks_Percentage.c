//C program to calculate the total marks, percentage, and division of students.

#include <stdio.h>
int main()
{
  int sub1, sub2, sub3, sub4, sub5, total;
  float per;

  printf("Enter marks of 5 subjects:");
  scanf("%d%d%d%d%d",&sub1,&sub2, &sub3, &sub4, &sub5);

  total = sub1+sub2+sub3+sub4+sub5;
  per = total/5;

  printf("\n Total Marks: %d",total);
  printf("\n Total Percentage: %.2f ", per);

  if(per>=80)
    printf("\n Distinction");
  else if(per>=60)
    printf("\n First Division");
  else if(per>=50)
    printf("\n Seocnd Division");
  else if(per>=40)
    printf("\n Third Division");
  else
    printf("\n Fail");
    
  return 0;
}
