/* problem statement - 
Write a program that asks the
user to enter the total time elapsed, in seconds, since an event and converts the time to hours,
minutes and seconds. The time should be displayed as hours:minutes:seconds. [Hint: Use the
remainder operator]
*/

#include<stdio.h>

int main () {
    int hours , min , sec , a ,b ,c ,d ,e;

    puts("Enter the time elapsed in seconds");
    scanf("%d",&a);
    min = a/60;
    sec =(int) a % 60 ;

    

    if( min >= 60){
        hours = min / 60 ;
        min = 0;
        
    }
    printf("%d : %d : %d", hours , min , sec);
    return 0;

}