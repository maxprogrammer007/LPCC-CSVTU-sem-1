#include<stdio.h>
#include<math.h>

int main () {

int a;

printf("Enter the number");
scanf("%d",&a);

if(a == 1 || a == 0 || a < 0)
printf("not defined");
else 
{
	for( int i = sqrt(a) ; i >=2 ; i--) {
	if(a % i == 0 ){
		printf("Given Number is not prime .");
		break;
	}
	else{
		printf("Given number is prime.");
		break;
}
}
}
return 0;
}

// happy new year 🎊