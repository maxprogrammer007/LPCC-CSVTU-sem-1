#include <stdio.h>
int main()
{
    float a,b;
    int ch,c,d;
    printf("1.Sum\n2.Subtraction\n3.Division\n4.Remainder\nEnter your choice:");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Enter 1st no. to add:");
        scanf("%f",&a);
        printf("Enter 2nd no. to add:");
        scanf("%f",&b);
        printf("yor required sum is:%f",a+b);
    }
    else if(ch==2)
    {
        printf("Enter 1st no. to subtract:");
        scanf("%f",&a);
        printf("Enter 2nd no. to subtract:");
        scanf("%f",&b);
        printf("yor required sum is:%f",a-b);

    }
    else if(ch==3)
    {
        printf("Enter 1st no. :");
        scanf("%f",&a);
        printf("Enter 2nd no. :");
        scanf("%f",&b);
        if(b==0){
            printf("Division not possible");
        }
        else{
            printf("yor required division is:%f",a/b);
        }        
    }
    else if(ch==4)
    {
        printf("Enter 1st no. :");
        scanf("%d",&c);
        printf("Enter 2nd no. :");
        scanf("%d",&d);
        if(b==0){
            printf("Division not possible");
        }
        else{
            printf("yor required remainder is:%d",c%d);
        }   
    }
    else{
        printf("Invalid number");
    }

}