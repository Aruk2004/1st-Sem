// C Program to Find G.C.D and L.C.M using recursion

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

int main()
{
    int a, b;

    printf("Enter two positive integers: ");
    scanf("%d%d", &a, &b);

    printf("GCD = %d\n", gcd(a, b));
    printf("LCM = %d", lcm(a, b));

    return 0;
}

