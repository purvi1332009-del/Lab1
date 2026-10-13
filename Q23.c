#include <stdio.h>
int main()
{
    int i, base, exp;
    float result = 1;
    printf("enter the base:");
    scanf("%d", &base);
    printf("enter the exp:");
    scanf("%d", &exp);
    for (i = 1; i <= exp; i++)
    {
        result *= base;
    }
    printf("%d^%d=%.2f\n", base, exp, result);
    return 0;
}