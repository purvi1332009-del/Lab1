#include <stdio.h>
int main()
{
    int i, n, isPrime = 1;
    printf("enter the positive int:");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("%d id neither prime nor composite:%d\n");
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("%d is prime num:%d\n", n);
    }
    else
    {
        printf("%d is not a prime num");
    }
    return 0;
}