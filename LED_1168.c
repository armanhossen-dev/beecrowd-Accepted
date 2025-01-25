#include <stdio.h>
#include <string.h>
int main()
{
    int n, j;
    scanf("%d", &n);
    for (j = 1; j <= n + 1; j++)
    {
        char s[1000000];
        gets(s);
        int sum = 0, i;
        int len = strlen(s);
        for (i = 0; i < len; i++)
        {

            if (s[i] == '1')
            {
                sum += 2;
            }
            else if (s[i] == '2')
            {
                sum += 5;
            }
            else if (s[i] == '3')
            {
                sum += 5;
            }
            else if (s[i] == '4')
            {
                sum += 4;
            }
            else if (s[i] == '5')
            {
                sum += 5;
            }
            else if (s[i] == '6')
            {
                sum += 6;
            }
            else if (s[i] == '7')
            {
                sum += 3;
            }
            else if (s[i] == '8')
            {
                sum += 7;
            }
            else if (s[i] == '9')
            {
                sum += 6;
            }
            else if (s[i] == '0')
            {
                sum += 6;
            }
        }
        if (i != 0)
        {
            printf("%d leds\n", sum);
        }
    }
    return 0;
}