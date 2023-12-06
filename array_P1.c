//WAP to represent an array of 10 integers value from the user and print the sum of each elements in the array.

#include<stdio.h>

int main () {

int a[10],i,s=0;

for(i = 1 ; i <= 10 ; i++) {

	printf("enter the no. %d ", i);
	scanf("%d",&a[i]);
	s = s + a[i];
	}
printf(" \nSum of the integer number is : %d",s);

return 0;

}