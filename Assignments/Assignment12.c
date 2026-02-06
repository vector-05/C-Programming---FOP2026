#include <stdio.h>
void main() {

    // Assignment 12
    // Program to perform mathematical operations on two numbers
    // - Smallest Common Divisor (SCD)
    // - Greatest Common Divisor (GCD)

    // Input
    int num1, num2, scd, gcd, min_value, max_value, is_scd_found = 0, is_gcd_found = 0;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    min_value = (num1 < num2) ? num1 : num2;
    max_value = (num1 > num2) ? num1 : num2;

    // Calculate SCD
    scd = 2;
    while (scd <= min_value) {
        if (num1 % scd == 0 && num2 % scd == 0) {
            is_scd_found = 1;
            break;
        }
        scd++;
    }
    if (!is_scd_found) {
        scd = 1; // If no common divisor found, SCD is 1
    }
    printf("Smallest Common Divisor of %d and %d is %d\n", num1, num2, scd);

    // Calculate GCD
    gcd = max_value;
    while (gcd > 1) {
        if (num1 % gcd == 0 && num2 % gcd == 0) {
            is_gcd_found = 1;
            break;
        }
        gcd--;
    }
    if (!is_gcd_found) {
        gcd = 1; // If no common divisor found, GCD is 1
    }
    printf("Greatest Common Divisor of %d and %d is %d\n", num1, num2, gcd);

}