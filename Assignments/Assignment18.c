#include <stdio.h>

int main() {

    // Assignment 18
    // Program to accept a string (input) and perform string operations on it.
    // 1) Length of string
    // 2) Reverse of string
    // 3) Equality of two strings
    // 4) Checking palindrome
    // 5) Substring

    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    // 1) Length of string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);

    // 2) Reverse of string
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    // 3) Equality of two strings
    char str2[100];
    printf("Enter another string to compare: ");
    scanf("%s", str2);
    int isEqual = 1; // Assume strings are equal
    for (int i = 0; i < length; i++) {
        if (str[i] != str2[i]) {
            isEqual = 0; // Strings are not equal
            break;
        }
    }
    if (isEqual) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    // 4) Checking palindrome
    int isPalindrome = 1; // Assume string is a palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; // String is not a palindrome
            break;
        }
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    // 5) Substring
    char substring[100];
    printf("Enter a substring to search: ");
    scanf("%s", substring);
    int subLength = 0;
    while (substring[subLength] != '\0') {
        subLength++;
    }
    int found = 0; // Assume substring is not found
    for (int i = 0; i <= length - subLength; i++) {
        int j;
        for (j = 0; j < subLength; j++) {
            if (str[i + j] != substring[j]) {
                break;
            }

        }        if (j == subLength) {
            found = 1; // Substring found
            break;
        }
    }
    if (found) {
        printf("The substring is present in the string.\n");
    } else {
        printf("The substring is not present in the string.\n");
    }

    return 0;
}