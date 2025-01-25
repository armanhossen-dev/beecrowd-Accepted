// beecrowd | 1858 | Theon's Answer
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int u[n], op = 1;
    int tem, j, k, i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &u[i]);
    }
    tem = u[0];
    for (i = 0; i < n; i++)
    {
        if (u[i] < tem)
        {
            tem = u[i];
            op = i + 1;
        }
    }
    printf("%d\n", op);
    return 0;
}