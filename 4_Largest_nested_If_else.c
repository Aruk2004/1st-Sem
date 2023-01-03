//C Program to find the Largest among Three Variables using Nested if

#include <stdio.h>

int main() {

  int n1, n2, n3;

  // Taking input from user
  printf("Enter three numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  // outer if statement
  if (n1 >= n2) {

    // inner if...else
    if (n1 >= n3)
      printf("%d is the largest number.", n1);
    else
      printf("%d is the largest number.", n3);
  }

  // outer else statement
  else {

    // inner if...else
    if (n2 >= n3)
      printf("%d is the largest number.", n2);
    else
      printf("%d is the largest number.", n3);
  }

  return 0;
}
