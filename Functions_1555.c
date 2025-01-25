#include <stdio.h>
#include <math.h>

int r(int x, int y);
int b(int x, int y);
int c(int x, int y);
void big(int r1, int b1, int c1);

int main()
{
    int n, i, x, y, r1, b1, c1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        r1 = r(x, y);
        b1 = b(x, y);
        c1 = c(x, y);
        big(r1, b1, c1);
    }
    return 0;
}

int r(int x, int y)
{
    int a1 = ((pow((3 * x), 2)) + (pow(y, 2)));
    return a1;
}

int b(int x, int y)
{
    int a1 = ((2 * pow(x, 2)) + (pow((5 * y), 2)));
    return a1;
}

int c(int x, int y)
{
    int a1 = (((-100) * x) + pow(y, 3));
    return a1;
}

void big(int r1, int b1, int c1)
{
    if (r1 > b1 && r1 > c1)
    {
        printf("Rafael ganhou\n");
    }
    else if (b1 > r1 && b1 > c1)
    {
        printf("Beto ganhou\n");
    }
    else
    {
        printf("Carlos ganhou\n");
    }
}