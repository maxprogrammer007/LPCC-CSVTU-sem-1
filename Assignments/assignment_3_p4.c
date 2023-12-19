#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions for the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);

    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    // Input dimensions for the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);

    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    // Check if matrices can be multiplied
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied. Columns of the first matrix must be equal to rows of the second matrix.\n");
        return 1; 
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // yaha se 1st matrix ke elemnts ko input karvayenge
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // yaha se 2nd matrix ke elements ko input krvayenge
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    ?? matrix multiply krvayenge
    multiplyMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result);

    // yaha se matrix display krvayenge
    printf("\nFirst Matrix:\n");
    displayMatrix(rows1, cols1, matrix1);

    printf("\nSecond Matrix:\n");
    displayMatrix(rows2, cols2, matrix2);

    printf("\nProduct of Matrices:\n");
    displayMatrix(rows1, cols2, result);

    return 0;
}
