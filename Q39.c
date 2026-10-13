#include <stdio.h>
int main()
{
    int n, i;
    long int fact = 1;
    float sum = 0;
    printf("enter value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact *= i;
        sum = sum + (float)i / fact;
    }
    printf("sum =%.2f", sum);
    return 0;
}