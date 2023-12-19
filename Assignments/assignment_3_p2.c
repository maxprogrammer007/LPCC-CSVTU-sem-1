// assignment - 03 - problem 3 - print the transpose of matrix 

#include <stdio.h>

// transpose krvane ke liye functions
void transposeMatrix(int rows, int cols, int mat[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

// matrix dikhane ke liye function
void displayMatrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // yaha humlog matrix ka size inpuit krva rahe hai like n x m wala 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int result[cols][rows];

    // yaha humlog matrix ke elements input krva rahe hai 
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // functions jo banaye they ups uski help se hum transpose wala operation krva ke dikhayenge
    transposeMatrix(rows, cols, matrix, result);

    // yaha jo original ( jo humlog enter kiye they input me ) woh wala matrix dikhayenge
    printf("\nOriginal Matrix:\n");
    displayMatrix(rows, cols, matrix);

    // yaha se matrix display krvayenge
    printf("\nTranspose of Matrix:\n");
    displayMatrix(cols, rows, result);

    return 0;
}
