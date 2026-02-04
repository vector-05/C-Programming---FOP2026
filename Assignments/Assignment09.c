#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main() {

    // Assignment 09
    // Program to check if a number is a armstrong number or not

    char num[100];

    printf("Enter a number: ");
    scanf("%s", num);

    int numlen = strlen(num);
    int sum = 0;
    for (int i = 0; i < numlen; i++) {
        sum += pow((num[i] - '0'), numlen);
    }
    if (sum == atoi(num)) {
        printf("%s is an Armstrong number\n", num);
    } else {
        printf("%s is not an Armstrong number\n", num);
    }

}