#include <stdio.h>
int main()
{
    long long int a, b, s = 0, i, j, test, f[1000];
    f[0] = a = s = 0;
    f[1] = b = 1;
    i = 2;
    while (i <= 60)
    {
        s = (a + b);
        f[i] = s;
        a = b;
        b = s;
        i++;
    }
    scanf("%d", &test);
    int d;
    for (j = 1; j <= test; j++)
    {
        scanf("%d", &d);
        printf("Fib(%d) = %lld\n", d, f[d]);
    }
    return 0;
}