#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); //number of elements in the array

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); //The element to search is read from test case.

/* Use the printf statements as below:
 printf("%d found at location %d.\n", search, variable_name);
 printf("Not found! %d isn't present in the list.\n", search);
*/
// Binary Search Logic
 int first = 0;
 int last = n - 1;
 int middle = (first + last) / 2;

 while (first <= last) 
 {
    if (array[middle] < search)
       first = middle + 1;
    else if (array[middle] == search) 
    {
       // Position is index + 1
       printf("%d found at location %d.\n", search, middle + 1);
       break;
    }
    else
       last = middle - 1;

    middle = (first + last) / 2;
 }

 if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

 return 0;
}