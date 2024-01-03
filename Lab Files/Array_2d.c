// Initialize a 2D array , store values and print them.

#include<Stdio.h>

int main () {

    int row ;
    int column;

    printf(" Enter row size : ");
    scanf("%d", &row);

    printf("Enter column size : ");
    scanf("%d", &column);

    int arr[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf(" enter  arr[%d][%d] : ",i,j);
            scanf(" %d ", &arr[i][j]);

        }
        printf("\n");
    }
    
    printf(" THe elements of array elemets are : \n");
    for (int i = 0; i < row; i++)
    {
        for ( int j = 0; j < column; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
 return 0;   
    
}