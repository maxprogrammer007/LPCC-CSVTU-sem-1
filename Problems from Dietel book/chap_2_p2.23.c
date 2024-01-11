/* problem statement - 
Write a program that reads an integer and determines and prints whether
it’s odd or even. [Hint: Use the remainder operator. An even number is a multiple of two. 
Any multiple of two leaves a remainder of zero when divided by 2.]
*/

#include<stdio.h>

int main() {
    int num1;
    puts("Enter any number you want to check : ");
    scanf("%d",&num1);

    if(num1 % 2 == 0)
    puts("The given number is even");
    else
    puts("The given number is not even");

    return 0;

}