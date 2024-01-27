#include<stdio.h>
 void add_one(int array[] , int length);

 int main(void)

{  
int arr[] = {2,3,4,5,6,7};
add_one(arr,6);
for (int i = 0; i < 6; i++)
{
    printf("a[%d] = %d\n", i ,arr[i]);
}


return 0;
}

  void add_one(int array[] , int length)
{
    for (int i = 0 ; i < length ; i++)
    array[i]++;
}