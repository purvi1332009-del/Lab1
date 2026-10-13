#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("enter the num of elements:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d^2=%d\t", i, i * i);
    }

    return 0;
}