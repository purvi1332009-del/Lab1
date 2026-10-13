#include <stdio.h>
int main()
{
    float units, bill_amount;
    printf("enter total electricity units consumed:");
    if (scanf("%f", &units) != 1 || units < 0)
    {
        printf("Invalid input.\n");
    }
    if (units <= 200)
    {
        bill_amount = units * 0.50f;
    }
    else if (units <= 400)
    {
        bill_amount = 100.0f + (units - 200.0f) * 0.65f;
    }
    else if (units <= 600)
    {
        bill_amount = 230.0f + (units - 400.0f) * 0.80f;
    }
    else
    {
        bill_amount = 425.0f + (units - 600.0f) * 125.0f;
    }
    printf("\nunits consumed:%.2f\n", units);
    printf("Total Bill:Rs.%.2f\n", bill_amount);
    return 0;
}