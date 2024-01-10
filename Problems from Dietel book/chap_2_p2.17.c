/*Problem statement
Write a program than asks the user to enter the initial velocity and acceleration of an object, and the time that has elapsed, places them in the variables u, a, and t, and prints
the final velocity, v, and distance traversed, s, using the following equations.
a) v = u + at
b) s = ut + (1/2)at^2 */

#include <stdio.h>

int main()
{
    float v, u, a, t, s;
    puts("Enter the value of inital velocity :");
    scanf("%f", &u);
    puts("Enter the value of final velocity");
    scanf("%f", &v);
    puts("Enter the value of time taken");
    scanf("%f", &t);
    puts("Enter the value of accln. :");
    scanf("%f", &a);
    v = u + a * t;
    s = u * t + (1 / 2) * a * t * t;
    printf("Here is the value of final velocity : %f\n", v);
    printf("Here is the value of ditance travelled : %f", s);

    return 0;
}