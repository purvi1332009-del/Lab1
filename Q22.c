#include <stdio.h>
int main()
{
    int i = 1, n, factorial = 1;
    printf("enter the value of n:");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("error!invalid value");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {

            factorial *= i;
        }
        printf("factorial of n is:%d\n", factorial);
        return 0;
    }
}