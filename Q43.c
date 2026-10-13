#include <stdio.h>
int main()
{
    float sales, commission;
    printf("Enter the total sales amount(rs.):");
    if (scanf("%f", &sales) != 1 || sales < 0)
    {
        printf("Invalid input.\n");
    }
    if (sales <= 500)
    {
        commission = 0.05f * sales;
    }
    else if (sales <= 2000)
    {
        commission = 35.0f + 0.10f * (sales - 500.0f);
    }
    else if (sales <= 5000)
    {
        commission = 185.0f + 0.12f * (sales - 2000.0f);
    }
    else
    {
        commission = 0.125f * sales;
    }
    printf("Sales Amount:Rs.%.2f\n", sales);
    printf("Commission:Rs.%.2f\n", commission);
    return 0;
}