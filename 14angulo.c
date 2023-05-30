#include <stdio.h>

int main()
{
    float graus, rad;
    scanf("%f", &graus);
    rad = graus * (3.14/180);
    printf("%.2f\n", rad);
    return 0;
}