//C program for String concatenation without using strcat

#include <stdio.h>

int main() {
    char str1[100], str2[100], concat[200];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // concatenating str1 and str2
    for (i = 0; str1[i] != '\0'; i++) {
        concat[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++) {
        concat[i+j] = str2[j];
    }

    concat[i+j] = '\0';

    printf("Concatenated string is: %s\n", concat);

    return 0;
}

