#include <stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);
    int i; // n[100] lag be na array
    for (i = 0; i <= 99; i++)
    {
        printf("N[%d] = %.4lf\n", i, a);
        a = a / 2;
    }
    return 0;
}