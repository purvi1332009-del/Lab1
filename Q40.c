#include <stdio.h>
int main()
{
    double num, total_sum = 0.0;
    int count = 0;
    printf("Enter number(enter negative num to stop):\n");
    while (1)
    {
        if (scanf("%lf", &num) != 1)
        {
            printf("Invalid input.existing.\n");
        }
        if (num < 0)
        {
            break;
        }
        total_sum += num;
        count++;
    }
    if (count > 0)
    {
        double average = total_sum / count;
        printf("\n---results ---\n");
        printf("Total count:%d\n", count);
        printf("total sum:%.2f\n", total_sum);
        }
    else
    {
        printf("\nNo negative num were entered.\n");
    }
    return 0;
}