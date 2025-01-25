#include <stdio.h>
long long int fac(long long int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fac(n - 1);
}


int main()
{
    long long int m, n;
    long long int sum = 0;
    // Keep reading input until there's no more input
    while (scanf("%lld %lld", &m, &n) == 2)
    {
        m = fac(m);
        n = fac(n);
        sum = m + n;
        printf("%lld\n", sum);
    }
    return 0;
}