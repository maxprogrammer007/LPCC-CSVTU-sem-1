#include<stdio.h>


int main () {
    int num , arr[5] ;
    puts("Enter the five digit number :");
    scanf("%d",&num);
    int r;
    for(int i=0;i<5;i++){
        r=num%10;
        arr[i]=r;
        num = num / 10;
        
    }
    for(int i=4;i>=0;i--){
        printf("%d   ",arr[i]);
    }



}