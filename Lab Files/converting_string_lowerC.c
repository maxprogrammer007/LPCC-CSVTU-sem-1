#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
char s[] = " This IS tHe WaY";
int count = strlen(s);
for(int i = 0 ; i < count ; i++ ) {
    s[i] = tolower(s[i]);
}

printf("Your given string is now converted into lowercase :- \n\t %s",s);
/*
int length = strlen(s);

for (int i = 0; i < length; i++)
{
    printf("%c", s[i]);
    if(isupper(s[i])) printf("\tupper\n");
    else if(islower(s[i]))
    printf("\tlower\n");

    else printf("\n");
}
*/

return 0;

}