#include <stdio.h>

// c = celsius, f = fahrenheit.
int main()
{
    float c, f;
    scanf("%f", &c);
    f = c * 1.8 + 32;
    printf("%.2f\n", f);
    return 0;
}