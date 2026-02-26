#include <stdio.h>
#include <math.h>

    // LCA 1 | 26-02-2026
    // Problem Statement : Program to perform mathematical operations on numbers
    // - Square root
    // - Square
    // - Cube
    // - Check for prime number
    // - Factorial
    // - Prime Factors

// Standard Power Function for General n 
int power_func(int num, int n) {
    return pow(num, n);
}

// factorial function
int factorial(int num) {
    if ((num == 1) || (num == 0)) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// function to check prime
int isprime(int num) {
    for (int i = 2; i <= floor(sqrt(num)); i++) {
        if (num % i == 0) {
            return 0;
            break;
        }
    }
    return 1;
}

// function to generate prime factors
int prime_factors(int num) {
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isprime(i)) {
            printf("%d ", i);
        }
    }
}

int main() {

    int number, ch;

    // input number
    printf("---------------------\n");
    printf("|| Enter the Number:||\n");
    scanf("%d", &number);
    printf("---------------------\n");

    // menu
    printf("----------------------\n");
    printf("|| Welcome to Calc  ||\n");
    printf("|| 1. Square Root   ||\n");
    printf("|| 2. Square        ||\n");
    printf("|| 3. Cube          ||\n");
    printf("|| 4. IsPrime       ||\n");
    printf("|| 5. Factorial     ||\n");
    printf("|| 6. Prime Factors ||\n");
    printf("----------------------\n");

    // user choice
    printf("Input Your Choice:\n");
    scanf("%d", &ch);

    // menu program
    switch (ch) {
        case 1 : printf("Square root of %d is: %.2f", number, sqrt(number)); break;
        case 2 : printf("Square of %d is: %d", number, power_func(number, 2)); break;
        case 3 : printf("Cube of %d is: %d", number, power_func(number, 3)); break;
        case 4 : if (isprime(number)) {
            printf("%d is Prime.", number);
        } else {
            printf("%d is Not Prime.", number);
        }
        break;
        case 5 : printf("Factorial of %d is: %d", number, factorial(number)); break;
        case 6 : printf("Prime Factors of %d are: 1 ", number);
                prime_factors(number);
                break;
    }

    // exit msg
    printf("\n---------------------\n");
    printf("||     Thank you    ||\n");
    printf("----------------------\n");

}