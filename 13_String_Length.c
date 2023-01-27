// C Program to find the length of a string without using strlen()

#include <stdio.h>

int stringLength(char* str) {
    int length = 0;
    while(*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = stringLength(str);
    printf("Length of the string is: %d\n", length);

    return 0;
}

