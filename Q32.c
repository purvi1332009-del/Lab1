#include <stdio.h>
int main()
{
    int n, i, num;
    int max, second_max;
    printf("enter the number of elements:");
    scanf("%d", &n);
    printf("enter %d numbers:\n", n);
    scanf("%d", &num);
    for (i = 1; i < n; i++)
    {
        scanf("%d", &num);
        if (num > max)
        {
            second_max = max;
            max = num;
        }
        if (num > second_max && num != max)
        {
            second_max = num;
        }
    }
    printf("maximum =%d\n", max);
    printf("second maximum=%d\n", second_max);
    return 0;
}