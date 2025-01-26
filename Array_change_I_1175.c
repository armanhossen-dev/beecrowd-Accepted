#include <stdio.h>
int main()
{
    int n[20], o[20], i, j;
    for (i = 0, j = 19; i < 20; i++, j--)
    {
        scanf("%d", &n[i]);
        o[j] = n[i];
    }
    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, o[i]);
    }
    return 0;
}