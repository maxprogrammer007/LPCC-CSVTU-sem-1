//factorial

#include<stdio.h>

int main() {

    int a;
    scanf("%d",&a);

    for (int i = a-1; i > 0; i--)
    {
        a = a*i;

    }
    printf("%d",a);
    return 0;
    
}
