#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n); // n is number of elements in the array.
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
	int temp;
/* Logic to reverse the array by swapping */
  for (c = 0; c < n / 2; c++) {
    // Swap elements at index 'c' and index 'n - 1 - c'
    temp = array[c];
    array[c] = array[n - 1 - c];
    array[n - 1 - c] = temp;
  }
printf("Reversed array elements are:\n");

  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
  return 0;
}