#include<stdio.h>

int main () {

    int x,y;
    printf("enter the number x :");
    scanf("%d",&x);
    printf("enter the number y :");
    scanf("%d",&y);
    x = x + y;
    y = x - y;
    x = x - y;

    printf(" The swapped values of x is : %d \n The swapped values of y is  : %d", x , y);
    
}