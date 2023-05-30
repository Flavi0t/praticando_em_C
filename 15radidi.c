#include <stdio.h>

int main()
{
    float rad, grau;
    scanf("%f", &rad);
    grau = rad * (180/3.14);
    printf("%.2f\n", grau);
    return 0;
}