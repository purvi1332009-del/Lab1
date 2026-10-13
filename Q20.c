#include <stdio.h>
int main()
{
    char operator;
    float a, b;
    printf("enter value of a & b:");
    scanf("%f\n%f\n", &a, &b);
    printf("enter the operator('+','-'):");
    scanf("%c", &operator);
    switch (operator)
    {
    case '+':
        printf("sum is %.2f+%.2f=%.2f", a, b, a + b);
        break;
    case '-':
        printf("sub is %.2f-%.2f=%.2f", a, b, a - b);
        break;
    default:
        printf("error!invalid operator or value");
    }
    return 0;
}