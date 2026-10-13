// finding max value from 3 numbers
#include <stdio.h>
int main()
{
    float a, b, c, max;
    printf("value of a is:");
    scanf("%f", &a);
    printf("value of b is:");
    scanf("%f", &b);
    printf("value of c is:");
    scanf("%f", &c);
    max = a;
    if (b > max)

    {
        max = b;
    }
    if (c > max)
        ;
    {
        max = c;
    }
    printf("maximum no. is:%.2f\n", max);
    return 0;
}