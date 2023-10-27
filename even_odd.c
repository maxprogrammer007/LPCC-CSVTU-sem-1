#include<stdio.h>

int main () {
    int n;
    printf(" Enter the number :");
    scanf("%d",&n);
    if (n==0 || n==1 || n<0)
    {
        printf("This is invalid input , kindly dont give negative/zero/unity ");
        
    }
    

    else if (n%2==0)
    {
        printf("this is even");
    }
    else
    printf("This is odd");
    


}

