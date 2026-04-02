#include<stdio.h>

// C program to find root of the equation 2x^3 - 3x - 5 = 0 using Bisection method. The program should take the allowable error as input from test case data and print the root value with 4 decimal places.

float fun (float x); //Function fun returns the function value of f(x)
void bisection (float *x, float a, float b, int *itr); // This function computes the root of f(x) using bisection method

int main ()
{
    int itr = 0, maxmitr=10;
    float x, a=1.0, b=2.0, allerr, x1; // x is the value of root in each iteration, x1 is the final value of the root 
   // a and b are the initial range for calculating the root using bisection method
      
scanf("%f", &allerr);  // allerr is the allowable error taken from test case data 
    bisection (&x, a, b, &itr);

/* Use the printf statement as given below to print the root
printf("Root = %1.4f\n", x1); */

x1 = x; 

    /* Use the printf statement as given below to print the root */
    printf("Root = %1.4f\n", x1);
    
    return 0;
}

float allerr;

float fun (float x) {
    // Equation: 2x^3 - 3x - 5
    return (2 * x * x * x) - (3 * x) - 5;
}

void bisection (float *x, float a, float b, int *itr) {
    float x_mid;
    float range;

    while (1) {
        x_mid = (a + b) / 2.0;
        (*itr)++;
        
        // Update the root value for the current iteration
        *x = x_mid;

        // Manual absolute value check for |b - a|
        range = b - a;
        if (range < 0) range = -range;

        // Termination condition
        if (range < allerr) {
            break;
        }

        // Bisection narrowing logic
        if (fun(a) * fun(x_mid) < 0) {
            b = x_mid;
        } else {
            a = x_mid;
        }
        
        // Safety break to prevent TLE if max iterations are exceeded
        if (*itr >= 100) break;
    }
}