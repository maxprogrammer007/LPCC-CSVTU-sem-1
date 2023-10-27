#include <stdio.h>
#include <float.h>

int main() {
    printf("Minimum float value = %e\n", FLT_MIN);
    printf("Maximum float value = %e\n", FLT_MAX);
    printf("Size of float in bytes = %zu\n", sizeof(float));
    
    printf("Minimum double value = %e\n", DBL_MIN);
    printf("Maximum double value = %e\n", DBL_MAX);
    printf("Size of double in bytes = %zu\n", sizeof(double));
    
    return 0;
}

