// To check if the given string is upper or lower case 

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
char s[] = " This IS tHe WaY";

int length = strlen(s);

for (int i = 0; i < length; i++)
{
    printf("%c", s[i]);
    if(isupper(s[i])) printf("\tupper\n");
    else if(islower(s[i]))
    printf("\tlower\n");

    else printf("\n");
}


return 0;

}