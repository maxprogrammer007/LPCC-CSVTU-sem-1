#include<stdio.h>

int main(){
    float a,b,h;
    printf("Enter the value of  base : ");
    scanf("%f",&b);
    printf("enter the value of height :");
    scanf("%f",&h);
    a=0.5*b*h;
    printf("The area of the triangle is : %f",a);

    return 0;
}