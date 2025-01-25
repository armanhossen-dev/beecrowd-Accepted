#include <stdio.h>
int main()
{
    // int a, i;
    long long int sum = 0, x, y;
    scanf("%lld %lld", &x, &y);
    sum = ((x + y) * (y - x + 1));
    sum/=2;

    printf("%lld\n", sum);

    return 0;
}