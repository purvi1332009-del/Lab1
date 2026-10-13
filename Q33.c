#include <stdio.h>
int main()
{
    int n, i, num;
    int max, min;
    printf("enter the number of elements:");
    scanf("%d", &n);
    printf("the %d elements are:", n);
    scanf("%d", &num);
    max = num;
    min = num;
    for (i = 1; i < n; i++)
    {
        scanf("%d", &num);
        if (num > max)

            max = num;

        if (num < min)

            min = num;
    }

    printf("Maximum num is=%d\n", max);
    printf("minimum num is=%d\n", min);
    return 0;
}