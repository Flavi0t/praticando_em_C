#include <stdio.h>

// ms = meters per second, km = kilometers per hours
int main()
{
    float ms, kmh;
    scanf("%f", &ms);
    kmh = ms * 3.6;
    printf("%.2f\n", kmh);
    return 0;
}