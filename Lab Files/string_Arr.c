/*Problem Statement :-
Input a string or sentence and then find the number of characters in it including whitespaces and hence thake input to find a specific number of occurences in that sentence of a particular character
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100] ;
    puts("Give the required string :-");
    gets(s1);

    int length = strlen(s1);
    int num_is = 0;

    char k;
    printf("Give the character of which you want the occurences : ");
    scanf("%c",&k);

    for (int i = 0; i < length; i++)
        if(s1[i] == k) num_is++;
    
    printf("The length is : %d\n",length);
    printf("Number of i in the string is : %d\n ", num_is);

    return 0;

}