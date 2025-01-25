#include <stdio.h>
int main()
{
    int n, i, a, b, sum, tem;
    scanf("%d", &n);
    a = 0;
    b = 1;

    if (n == 1 || n > 1)
    {
        printf("0");
    }

    if (n == 1)
    {
        printf("\n");
    }
    else
    {
        printf(" ");
    }

    if (n == 2 || n > 2)
    {
        printf("1");
    }

    if (n == 2)
    {
        printf("\n");
    }
    else
    {
        printf(" ");
    }

    for (i = 3; i <= n; i++)
    {
        sum = a + b;
        if (i != 1 || i != 2)
        {
            printf("%d", sum);
        }
        a = b;
        b = sum;
        if (i != n)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}