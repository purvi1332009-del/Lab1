#include <stdio.h>
int main()
{
    int n;
    printf("Enter a positive number N:");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("please enter a valid positive integer.\n");
    }
    printf("factors of %d are:", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            if (i != n)
            {
                printf(", ");
            }
        }
    }
    printf("\n");
    return 0;
}