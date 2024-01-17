//  problem statement - counting the number of occurences in an array

#include <stdio.h>
int occurrences( int array[] , int length, int to_find)
{
    
    int count = 0;


    for (int i = 0; i < length; i++)
    {
        if (abhi[i] == to_find)
            count++;
    }
}
int main()
{

    int abhi[] = {4, 9, 7, 6, 5, 8, 3, 2, 1, 5};

    printf("# of 5s found : %d \n", count);

    return 0;
}