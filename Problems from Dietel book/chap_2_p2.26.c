/* problem statement - 

Write a program that reads in two integers and determines and prints whether
the first is a multiple of the second. [Hint: Use the remainder operator.
*/

#include<stdio.h>

int main() {
    int a , b ;

    puts("Enter the first number :");
    scanf("%d",&a);

    puts("Enter the second number :");
    scanf("%d",&b);

    if(a % b == 0)
    printf("The first number is multiple of second number");
    else
    printf("The given set of number are not multiple");

    return 0;
}