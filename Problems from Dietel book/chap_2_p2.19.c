/*problem statement - 
Write a program that inputs three different
integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest of these numbers. 
Use only the single-selection form of the if statement you learned in this chapter. The screen dialogue should appear as follows:
    Enter three different integers: 13 27 14
    Sum is 54
    Average is 18
    Product is 4914
    Smallest is 13
    Largest is 27
*/

#include<stdio.h>

int main() {
    int num1 , num2 , num3 ;
    
    puts("Enter the first number :");
    scanf("%d",&num1);
    puts("Enter the second number :");
    scanf("%d",&num2);
    puts("Enter the third number :");
    scanf("%d",&num3);

    printf("%s %d","The sum of all three numbers is :",num1 + num2 + num3);
    printf("\n");
    printf("%s %d","The average of three numbers :",(num1 + num2 + num3)/3);
    printf("\n");
    printf("%s %d","The product of all three number is :",(num1*num2*num3));
    printf("\n");
    
    int sml = 0 , lrg = 0;
    if (num1 > num2 && num1 > num3)
    lrg = num1;
    else if (num2 > num1 && num2 > num3)
    lrg = num2;
    else
    lrg = num3;

    if(num1 < num2 && num1 < num3)
    sml = num1;
    else if(num2 < num1 && num2 < num3)
    sml = num2;
    else
    sml = num3;

    printf("%s %d","The smallest of all three is :",sml);
    printf("\n");
    printf("%s %d","The largest of all three is :",lrg);
    printf("\n");

    return 0;
}