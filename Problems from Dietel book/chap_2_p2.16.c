/*  Problem statement 
Write a program that asks the user to enter two numbers, obtains them from
the user and prints their sum, product, difference, quotient and remainder.
*/

#include<stdio.h>

int main () {
    int a , b;
    puts("Enter the first number : ");
    scanf("%d",&a);
    puts("Enter the second number : ");
    scanf("%d",&b);
    printf("%s %d\n%s %d\n%s %d\n%s %d\n%s %d\n","The Sum is : ",a+b,"The product is :",a*b,"The difference is",a-b,"The quotient is :",a/b,"The remainder is :",a%b);
    return 0;
}