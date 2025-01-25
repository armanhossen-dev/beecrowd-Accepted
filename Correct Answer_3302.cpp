// https://judge.beecrowd.com/en/problems/view/3302
#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("resposta %d: %d\n", 1 + i, ar[i]);
    }
    return 0;
}