#include <stdio.h>
int main()
{
    float i, x, n, y;
    float result = 1;
    printf("enter value of x:");
    scanf("%f", &x);
    printf("ente the value of n:");
    scanf("%f", &n);
    if (n == 1)
    {
        y = 1 + x;
    }
    if (n == 2)
    {
        y = 1 + x / n;
    }
    if (n == 3)
    {
        for (i = 1; i <= n; i++)
        {
            result *= x;
        }
        printf("%.2f*%.2f=%.2f\n", result);
        y = 1 + result;
    }
    if (n < 1 || n > 3)
    {
        y = 1 + x * n;
    }
    printf("y=%.2f\n", y);
    return 0;
}