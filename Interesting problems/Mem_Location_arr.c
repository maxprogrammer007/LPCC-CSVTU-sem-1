#include<stdio.h>

int main() {
    int a;
    printf("Enter the number of elements you want in array : ");
    scanf("%d",&a);

    int arr[a];

    for(int i = 0 ; i < a ; i++)
    {
        printf("Memory location for the index number %d is : %d  ", i , &arr[i]);
        printf("\n");
    }
    
    printf("The size of the given array is %d bytes.\n The size of each array unit is %d", sizeof(arr[a])*a,sizeof(arr[a]));
    return 0;
}