// C program to Count Consonants, Vowels, Digits, Spaces in String.

#include <stdio.h>

void count(char* str) {
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, i;
    for (i = 0 ; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] == ' ') {
            spaces++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    count(str);
    return 0;
}

