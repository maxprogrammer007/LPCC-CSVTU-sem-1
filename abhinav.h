#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

void sum(int a , int b )
{
    printf("\nAddition of two numbers given by you is : %d\n", a + b);
}

void multiply(int a , int b)
{
    printf("\nMultiplication of the two numbers given by you is : %d\n", a*b);
}

void divide(int a , int b)
{
    printf("\nWhen you will divide %d by %d then the output will be %d\n",a,b,a/b);
}

void subtract( int a , int b)
{
    printf("\nWhen you will subtract %d from %d then the result will be : %d\n",b,a,a-b);
}

void array_sort_xor() {
int arr[100], i, n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter %d element of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The given array is sorted in ascending order as follows: ");
    for (i = 0; i < n; ++i) {
        printf("%d\t", arr[i]);
    }
}


void array_2d_printing() {
    int row;
    int column;

    // Input: Number of Rows
    printf("\nEnter row size: \n");
    scanf("%d", &row);

    // Input: Number of Columns
    printf("\nEnter column size: \n");
    scanf("%d", &column);

    int arr[row][column];

    // Input: Elements of the Array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    // Output: Display Elements of the Array
    printf("The elements of the array are:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}


void factorial() {
    int a, result = 1;

    // Input: Number to calculate factorial
    printf("Enter a number: ");
    scanf("%d", &a);

    // Calculate Factorial
    for (int i = a; i > 0; i--) {
        result *= i;
    }

    // Output: Display the factorial
    printf("Factorial of %d is: %d\n", a, result);

    
}

//Printing Right angle triangle with star

void right_triangle()
{
    int a,b,i;
    printf("Enter the no. of rows of triangle=");
    scanf("%d",&i);
    for(a=1;a<=i;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

void pnc_ncr() {
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    int factN = 1;
    for (int i = 1; i <= n; i++) {
        factN *= i;
    }

    int factR = 1;
    for (int i = 1; i <= r; i++) {
        factR *= i;
    }

    int factNR = 1;
    for (int i = 1; i <= (n - r); i++) {
        factNR *= i;
    }

    int ans = factN / (factR * factNR);

    printf("The result of nCr(%d, %d) is: %d\n", n, r, ans);

    
}

void pnc_npr() {
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    int factN = 1;
    for (int i = 1; i <= n; i++) {
        factN *= i;
    }

    int factNR = 1;
    for (int i = 1; i <= (n - r); i++) {
        factNR *= i;
    }

    int ans = factN / factNR;

    printf("The result of nPr(%d, %d) is: %d\n", n, r, ans);

    
}


void prime_num() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not defined for numbers less than or equal to 1.\n");
    } else {
        int isPrime = 1; // Assume the number is prime initially

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0; // Set isPrime to 0 if a factor is found
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }
}
