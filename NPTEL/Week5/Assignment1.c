// Write a C program to check whether a given number (N) is a perfect number or not?
// [Perfect Number - A perfect number is a positive integer number which is equals to the sum of its proper positive divisors. For example 6 is a perfect number because its proper divisors are 1, 2, 3 and it’s sum is equals to 6.]

#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N); /* An integer number taken as input from test cases */

/*Complete the program by writing the rest of the code in the space provided.

Please copy and paste the printf statement given below wherever required
printf("\n%d is a perfect number.",N);
printf("\n%d is not a perfect number.",N);
*/
	int sum;
// Iterating from 1 up to N/2 to find proper divisors
    for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0) {
            sum = sum + i;
        }
    }

    // Checking if the sum of divisors equals the original number
    if (sum == N && N > 0) {
        printf("%d is a perfect number.", N);
    } else {
        printf("%d is not a perfect number.", N);
    }

    return 0;
}