#include <stdio.h>

// k = kelvin, c = celsius.
int main()
{
    float k, c;
    scanf("%f", &k);
    c = k - 273.15;
    printf("%.2f\n", c);
    return 0;
}