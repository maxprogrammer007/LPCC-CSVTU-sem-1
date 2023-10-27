#include<stdio.h>
int main (){
    int a , b , c , sum , avg;
    printf("Give the input for number a :");
    scanf("%d",&a);
    printf("give the input for number b : ");
    scanf("%d",&b);
    printf("give the input for number c :");
    scanf("%d",&c);
    sum = a+b+c;
    avg=(a+b+c)/3;
    printf("The sum of the given numbers are : %d\n",sum);
    printf("\nthe average of the given numbers are : %d", avg);
    printf("\nthank you");

    return 0;
}