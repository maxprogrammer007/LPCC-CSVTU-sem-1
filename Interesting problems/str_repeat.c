#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *repeat(char *string, int repeats);

int main()
{
    char str[100];
    gets(str);

    int length = strlen(str)/4;

    int itr;
    printf("How many times you want to repeat the string : ");
    scanf("%d", &itr);

    int f_length = length * itr;

    char repeat_string[f_length];

    sprintf(repeat_string, "%s%s", str);

    for (int i = 0; i < itr; i++)
    {

        printf("%s", repeat_string);
    }

    return 0;
}


char *repeat(char *string, int repeats)
{
    
}