#include <stdio.h>
int main()
{
    int a, b, r, c = 0;
    printf("Enter no. of rows = ");
    scanf("%d", &r);
    for (a = 1; a <= r; ++a, c = 0)
    {
        for (b = 1; b <= (r - a); ++b)
        {
            printf(" ");
        }
        while (c != (2 * a) - 1)
        {
            printf("*");
            ++c;
        }
        printf("\n");
    }
    return 0;
}