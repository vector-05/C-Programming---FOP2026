#include<stdio.h>

// C program to find root of the equation x^3 - 2x - 3 = 0 using Newton-Raphson method. The program should take the maximum number of iterations as input from test case data and print the root value with 6 decimal places.

float f(float x);
float df (float x);

int main()
{
    int itr, maxmitr; // itr is the iteration number and maxitr is the maximum allowable iteration 
    float x0=1.0, x1; // x0 is the initial value and x1 is result 
    scanf("%d", &maxmitr); // Taken from the test cases 

// use the printf statement as printf("Root = %8.6f\n", x1);

// Newton-Raphson Iterative Logic
    for (itr = 1; itr <= maxmitr; itr++) {
        // Calculate the next approximation
        x1 = x0 - (f(x0) / df(x0));
        
        // Update x0 for the next iteration
        x0 = x1;
    }

    // Print the final result after reaching maxmitr
    printf("Root = %8.6f\n", x1);

    return 0;
}

// Function to return f(x) = x^3 - 2x - 3
float f(float x) {
    return (x * x * x) - (2 * x) - 3;
}

// Function to return the derivative f'(x) = 3x^2 - 2
float df(float x) {
    return (3 * x * x) - 2;
}