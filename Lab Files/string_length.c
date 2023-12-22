// FIND THE LENGTH OF THE STRING USING THE POINTER.
#include<stdio.h>
int main()
{
    int strlen(char *);
    char str[100];
    char *p;
    p=str;
    printf("Enter the string..?\n");
    gets(str);
    int x=strlen(p);
    printf("Length of string is=%d\n",x);


}
int strlen(char *p)
{
    int c=0;
    while(*p!='\0')
    {
        c++;
        *p++;
    }
    return(c);
}

