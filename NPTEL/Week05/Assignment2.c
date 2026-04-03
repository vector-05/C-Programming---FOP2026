// Write a C program to count total number of digits of an Integer number (N).

#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N); /*The number is accepted from the test case data*/

/* Complete the rest of the code. Please use the printf statements as below
by just changing the variables used in your program 

printf("The number %d contains %d digits.",N,count);

*/
	int count = 0;
    int temp = N;

    // Handle negative numbers
    if (temp < 0)
        temp = -temp;

    // Special case when N is 0
    if (temp == 0)
        count = 1;
    else
    {
        while (temp > 0)
        {
            temp = temp / 10;
            count++;
        }
    }

    printf("The number %d contains %d digits.", N, count);

    return 0;
}