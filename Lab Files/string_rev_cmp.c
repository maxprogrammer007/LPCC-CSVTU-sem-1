// WAP to check f the given string is pallindrome or not

#include<stdio.h>
#include<string.h>

int main()
{
char s1[] = "madam";

char s2[] = "madam";

if (strcmp(s1, strrev(s2))  == 0)
{
 printf("Yes they are pallindrome");
}

else
printf("No they are not");

 

return 0;

}