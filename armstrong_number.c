/* #include<stdio.h>>

int main(){

    int num,r,sum = 0 , temp ;

    printf("enter any number : ");
    scanf("%d",&num);
    
    for ( temp = num ; num != 0; num = num/10)
    {
        r = num % 10 ;
        sum = sum + (r*r*r);

    }

    if (sum == temp)
        printf("%d is an armstrong number ");
    else
        printf("%d is not an armstrong number");

    return 0;
    
    
} */

#include <math.h>
#include <stdio.h>

int main() {
   int num, originalNum, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}