#include<stdio.h>
void pattern();

int main () {
    for(int i=0;i<3;i++){pattern();}
}
void pattern()
{
    for(int i=0;i<8;i++){printf("*");}
    printf("\n");
    printf(" ");
    for(int i=0;i<8;i++){printf("*");}
    printf("\n");
}

// credits - Harsh Sharma