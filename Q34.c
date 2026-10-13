#include <stdio.h>
int main()
{
    int n, i, a = 0, b = 1, c;
    printf("enter the num of terms:");
    scanf("%d", &n);
    printf("Fibonacci series:");

    // assigning values
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}