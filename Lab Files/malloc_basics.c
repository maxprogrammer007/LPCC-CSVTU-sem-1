// WAP to dynamically allocate a memory and then access each element and assign a value and then print them.

#include<stdio.h>
#include<stdlib.h>
int main() {
int *a;
a = malloc(sizeof(int)*5);
for (int i = 0; i < 5; i++)
{
    printf(" Enter the element at the index no.[%d] \n",i);
    scanf("%d",&a[i]);
}
for (int i = 0; i < 5; i++)
{
    printf("The element at the index no.[%d] is : %d \n", i , a[i]);
}


free(a);

return 0;
}
