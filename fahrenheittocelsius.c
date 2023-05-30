#include <stdio.h>

// f = fahrenheit, c = celsius.

int main()
{
    float f, c;
    scanf("%f", &f);
    c = 5 * (f - 32)/9;
    printf("%.2f\n", c);
    return 0;
}