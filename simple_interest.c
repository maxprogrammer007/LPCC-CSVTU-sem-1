/* A simple SI program in the lab*/

#include<stdio.h>

int main() {

    float principal,ror,time,si, amount;
    
    printf(" Enter the principal amount :");
    scanf("%f",&principal);
    
    printf(" Enter the rate of interest:");
    scanf("%f",&ror);
    
    printf(" Enter the time required :");
    scanf("%f",&time);

    si = (principal*ror*time)/100;
    amount = si + principal;

    printf("The simple interest of for the given data is %f and the final amount would be %f",si,amount);


return 0;
}