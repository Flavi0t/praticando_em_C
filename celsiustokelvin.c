#include <stdio.h>

// c = celsius, k = kelvin;
int main()
{
    float c, k;
    scanf("%f", &c);
    k = c + 273.15;
    printf("%.2f\n", k);
    return 0;
}