#include <stdio.h>
#include <math.h>

void main () {

    // Assignment 05
    // Program to perform basic matrix operations
    // - Addition of two matrixes
    // - Saddle point of a matric
    // - Inverse of a matrix
    // - Magic Square of a matrix

    int matrix_add () {

        // Matrix addition

        int rows, cols, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);

        int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

        printf("Enter elements of first matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter elements of second matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
        }

        // Adding the two matrices
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        printf("Sum of the two matrices is:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

        return 0;
    }

    int saddle_point () {

        // Saddle point of a matrix

        // Input and Display the matrix
        int rows, cols, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);
        int matrix[rows][cols];
        printf("Enter elements of the matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
                }
        }

        printf("The matrix is:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }


        return 0;
    }

    int inverse_matrix () {

        // Inverse of a matrix

        // Input and Display the matrix
        int rows, cols, i, j;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);
        int matrix[rows][cols];
        printf("Enter elements of the matrix:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
                }
        }
        printf("The matrix is:\n");
        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

        return 0;
    }

    int magic_square () {

        // Magic Square of a matrix
        return 0;
    }

    int choice;

    printf("Choose an operation to perform:\n");
    printf("1. Addition of two matrices\n");
    printf("2. Saddle point of a matrix\n");
    printf("3. Inverse of a matrix\n");
    printf("4. Magic Square of a matrix\n");
    printf("Enter your choice (1-4): ");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            matrix_add();
            break;
        case 2:
            printf("You chose Saddle point of a matrix.\n");
            saddle_point();
            break;
        case 3:
            printf("You chose Inverse of a matrix.\n");
            inverse_matrix();
            break;
        case 4:
            printf("You chose Magic Square of a matrix.\n");
            magic_square();
            break;
        default:
            printf("Invalid choice. Please select a number between 1 and 4.\n");
    }
}