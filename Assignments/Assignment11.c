#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

void main() {
    // Assignment 11
    // Program to perform mathematical operations on numbers
    // - Square root
    // - Square
    // - Cube
    // - Check for prime number
    // - Factorial
    // - Prime Factors

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Square root
    printf("Square root of %d is %.2f\n", num, sqrt(num));

    // Square
    printf("Square of %d is %f\n", num, pow(num, 2));

    // Cube
    printf("Cube of %d is %f\n", num, pow(num, 3));

    // Check for prime number
    int isPrime = 1;
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    // Factorial
    printf("Factorial of %d is %d\n", num, factorial(num));    

    // Prime Factors
    printf("Prime factors of %d are: ", num);
    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            num /= i;
            i--;
        }
    }

}