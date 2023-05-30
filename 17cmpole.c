#include <stdio.h>

int main()
{
    double cm, pole;
    scanf("%lf", &cm);
    pole = cm/2.54;
    printf("%.2lf\n", pole);
    return 0;
}