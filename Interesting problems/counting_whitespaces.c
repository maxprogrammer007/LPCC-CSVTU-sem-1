#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_whitespace(char *string)
{

    int length = strlen(string);
    int count = 0;
    for (int i = 0; i < length; i++)
    {

        if (isspace(string[i]))
        {

            count++;
        }
    }
    return count;
}
int main()
{
    char string[] = "line 1\n 2\n\tline 3";
    int count = count_whitespace(string);

    printf("Total whitespace characters :%d\n", count);

    return 0;
}