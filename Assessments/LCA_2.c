#include <stdio.h>

int main() {

    // LCA 2 | 09-04-2026
    // Problem Statement : Input an array from user and create two arrays, one with even numbers and other with odd numbers. Display the contents of both the arrays.

    int arr[100], even_arr[100], odd_arr[100];
    int n, even_count = 0, odd_count = 0;

    // array size
    printf("---------------------\n");
    printf("|| Enter the Size of Array:||\n");
    scanf("%d", &n);
    printf("---------------------\n"); 

    // input array elements
    printf("---------------------\n");
    printf("|| Enter the Elements of Array:||\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // check for even or odd
        if (arr[i] % 2 == 0) {
            even_arr[even_count] = arr[i];
            even_count++;
        } else {
            odd_arr[odd_count] = arr[i];
            odd_count++;   
        }
    }

    // display even numbers
    printf("---------------------\n");
    printf("|| Even Numbers: ||\n");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_arr[i]);
    }
    printf("\n---------------------\n");

    // display odd numbers
    printf("---------------------\n");
    printf("|| Odd Numbers: ||\n"); 
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_arr[i]);
    }
    printf("\n---------------------\n");
    
    return 0;
}