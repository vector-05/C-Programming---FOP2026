// Write a C Program to find HCF of 4 given numbers using recursive function

#include<stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}

//Complete the rest of the program to calculate HCF
// Recursive function to calculate HCF of two numbers
int HCF(int x, int y)
{
    // Base case: if the second number is 0, the HCF is the first number
    if (y == 0)
    {
        return x;
    }
    // Recursive step: call HCF with y and the remainder of x divided by y
    else
    {
        return HCF(y, x % y);
    }
}