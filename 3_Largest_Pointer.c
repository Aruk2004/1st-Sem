// C Program to find the largest of three numbers using Pointers

#include <stdio.h>

int main()
{
    int a, b, c;
    int *p1, *p2, *p3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    p1 = &a;
    p2 = &b;
    p3 = &c;

    if (*p1 > *p2 && *p1 > *p3)
        printf("%d is the largest number.", a);

    else if (*p2 > *p1 && *p2 > *p3)
        printf("%d is the largest number.", b);

    else
        printf("%d is the largest number.", c);

    return 0;
}

