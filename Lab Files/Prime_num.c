#include <stdio.h>

int main()
{
    int num;
    printf(" enter any number :");
    scanf("%d", &num);
    if (num == 0 || num == 1 || num < 0)
    {
        printf("Primes are not defined for negative / zero or 1");
    }
    for (int i = 2 ; i <= num/2 ; i++)
    {
        if (num % i != 0)
        {
            printf("The given number is  prime");
            
            
        }
        else
        printf("The given number is not prime");
        i = i + 1;
        break;
    }
    return 0;
}

// happy new year 🎊