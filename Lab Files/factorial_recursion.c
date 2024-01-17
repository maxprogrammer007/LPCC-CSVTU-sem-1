#include <abhinav.h>
int fact(int n) {
    if(n == 1 || n == 0){return 1;}
    int fact1 = fact(n-1);
    int FactN = fact1 * n;

    return FactN;

}
int main()
{
    int x;
    scanf("%d",&x);
    printf("factorial is : %d", fact(x));
} 