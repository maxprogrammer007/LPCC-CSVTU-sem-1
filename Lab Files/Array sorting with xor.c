#include<stdio.h>
int main()
{
    int arr[100],i,j,n;
    printf("Enter the number of element in array you want:");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf(" enter %d element of array : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(arr[i]>arr[j]){
                arr[i]=arr[i]^arr[j];
                arr[j]=arr[i]^arr[j];
                arr[i]=arr[i]^arr[j];
            }
        }
    }
    printf("The given array is sorted in ascending order as follows : ");
    for(i=0;i<n;++i)
    {
       printf("%d\t ",arr[i]);
    }
    return 0;
}