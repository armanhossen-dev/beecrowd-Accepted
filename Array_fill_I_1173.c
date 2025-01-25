#include <stdio.h>
int main()
{
    int num = 0, n[10];
    scanf("%d", &num);
    n[0] = num;
    for (int i = 0, j = 1; i < 10; i++, j++)
    {
        n[j] = num = num * 2;
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}