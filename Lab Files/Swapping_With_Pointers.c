#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x;
    printf("Give the number x : ");
    scanf("%d", &x);
    int y;
    printf("Give the number y : ");
    scanf("%d", &y);
    printf("Here are the number you entered : %d , %d\n", x, y);
    swap(&x, &y);
    printf("Here are the swapped values of x & y : %d , %d\n ", x, y);
}
