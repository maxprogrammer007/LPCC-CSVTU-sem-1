#include<stdio.h>

int main(){
    int n1= 0 , n2 = 1 , n3 , i , number;
    printf("%s ","Enter the number of terms you want : ");
    scanf("%d",&number);
    for ( i = 2; i < number; i++)
    {
        n3 = n1+n2;
        printf("%s : %d ","here it is ", n3);
        n1 = n2;
        n2 = n3;
    }
    
    return 0;
}