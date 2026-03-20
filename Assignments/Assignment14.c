#include <stdio.h>
void main() {

    // Assignment 14
    // Program to convert binary (input) to decimal (output)

    long long binary;
    int decimal = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    printf("Decimal Number: %d\n", decimal);
}