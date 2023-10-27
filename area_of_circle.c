#include <stdio.h>
#define PI 3.14
int main()
{
    float a,r,p;
    printf("enter the value of radius :");
    scanf("%f",&r);
    a = PI*r*r;
    p = 2*PI*r;
    printf("The area of circle is %f and perimeter is %f",a,p);
    return 0;
}