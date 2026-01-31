#include <stdio.h>

int main (){

    // Calculator using switch case

    int ch;
    float num1, num2, result;

    printf("Welcome:\n");

    printf("Please enter Number 1:");
    scanf("%f", &num1);
    printf("Please enter Number 2:");
    scanf("%f", &num2);

    printf("\nPress-\n1 for add\n2 for sub\n3 for mul\n4 for div\n5 for exit\n");
    
    printf("Enter your choice:");
    scanf("%d", &ch);
    printf("\n");

    switch (ch) {
        case 1 : result = num1 + num2; printf("Sum of %f and %f is: %f\n", num1, num2, result); break;
        case 2 : result = num1 - num2; printf("Difference of %f and %f is: %f\n", num1, num2, result); break;
        case 3 : result = num1 * num2; printf("Multiplication of %f and %f is: %f\n", num1, num2, result); break;
        case 4 : result = num1 / num2; printf("Division of %f and %f is: %f\n", num1, num2, result); break;
        case 5 : break;
        default : break;
    }

    printf("\nThank you for using our services");

    return 0;
}