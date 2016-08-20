#include <stdio.h>

#define PI 3.14159

int main()
{
    int R;
    double result;
    scanf("%d", &R);
    result = (R * R) / 3.0;
    result = result * R * 4 * PI;
    printf("VOLUME = %.3f\n", result);
    
    return 0;
}