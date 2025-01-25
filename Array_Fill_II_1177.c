#include <stdio.h>
int main()
{
    int num, i, j = 0;
    scanf("%d", &num);
    for (i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, j);
        j++;
        if (j == num)
        {
            j = 0;
        }
    }
    return 0;
}