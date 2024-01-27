#include<stdio.h>
#include<string.h>

int main()
{
char s1[50] = "The first sentence\t";

char s2[] = " the second sentence\t";

strcat(s1,s2); // strcat = string concatenation 

printf("s1 : %s\n", s1);

printf("s2 : %s\n", s2);


return 0;

}