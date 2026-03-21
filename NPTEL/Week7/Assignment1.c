// Write a C program to find the sum of all elements of each row of a matrix.

#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); //Accepts number of rows
    scanf("%d",&c); //Accepts number of columns 

    for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }
/*Complete the code to print the sum of each rows. Use the printf() statement as
 printf("%d\n",sum); Where sum is the sum of a row. 
*/
    //Calculate and print sum of each row
	int sum;
    for(i=0;i<r;i++)
    {
        sum = 0;              //reset sum for each row
        for(j=0;j<c;j++)
        {
            sum = sum + matrix[i][j];
        }
        printf("%d\n",sum);   //print row sum
    }

    return 0;
}