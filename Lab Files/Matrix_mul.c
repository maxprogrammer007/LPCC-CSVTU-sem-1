#include <stdio.h>

void multiplyMatrices(int a[3][3], int b[3][3], int result[3][3]) {
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            for(int k=0; k<3; k++)
                result[i][j] += a[i][k] * b[k][j];
}

int main() {
    int matrixA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrixB[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3] = {{0}};

    multiplyMatrices(matrixA, matrixB, result);

    printf("Resultant Matrix:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            printf("%d\t", result[i][j]);
        printf("\n");
    }

    return 0;
}
