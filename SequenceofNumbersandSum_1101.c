// beecrowd | 1101 | Sequence of Numbers and Sum
#include <stdio.h>
int main()
{
    int x, y, sum;
    while (1)
    {
        scanf("%d %d", &x, &y);
        if (x <= 0 || y <= 0)
        {
            // printf("\n");
            break;
        }
        else
        {
            if (x < y)
            {
                int soto;
                soto = x;
                x = y;
                y = soto;
            }
            sum = 0;
            for (int i = y; i <= x; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }
    }
    return 0;
}