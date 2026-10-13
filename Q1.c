// simple interest calculation
#include <stdio.h>
int main()
{
    float p, r, t, simple_interest;
    printf("enter principal amount:");
    scanf("%f", &p);
    printf("enter the rate of interest:");
    scanf("%f", &r);
    printf("enter time in years:");
    scanf("%f", &t);
    simple_interest = (p * r * t) / 100;
    printf("the simple interest is:%.2f\n", simple_interest);
    return 0;
}