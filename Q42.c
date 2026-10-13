#include <stdio.h>
int main()
{
    int n;
    int is_prime = 1;
    printf("Enter a number N:");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input.\n");
    }
    if (n <= 1)
    {
        printf("%d is neither prime nor composite.\n", n);
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if (is_prime)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is a composite number.\n", n);
    }
    return 0;
}