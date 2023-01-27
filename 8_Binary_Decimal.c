// C program to Convert a binary number to decimal and vice-versa

#include <stdio.h>
#include <math.h>

int binary_to_decimal(int binary) {
    int decimal = 0, i = 0;
    while (binary != 0) {
        decimal += (binary % 10) * pow(2, i);
        ++i;
        binary /= 10;
    }
    return decimal;
}

int decimal_to_binary(int decimal) {
    int binary = 0, i = 1;
    while (decimal != 0) {
        binary += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }
    return binary;
}

int main()
{
    int number, choice;

    printf("Enter 1 to convert binary to decimal\n");
    printf("Enter 2 to convert decimal to binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter binary number: ");
        scanf("%d", &number);
        printf("Decimal equivalent: %d", binary_to_decimal(number));
    } else if (choice == 2) {
        printf("Enter decimal number: ");
        scanf("%d", &number);
        printf("Binary equivalent: %d", decimal_to_binary(number));
    } else {
        printf("Invalid choice");
    }

    return 0;
}

