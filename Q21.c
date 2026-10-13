#include <stdio.h>
int main()
{
    char operator;
    float a, b;
    printf("enter value of a and b:");
    scanf("%f\n%f\n", &a, &b);
    printf("enter the operator('+','-','*','/')");
    scanf("%c", &operator);
    switch (operator)
    {
    case '+':
        printf("print sum of %.2f+%.2f=%.2f", a, b, a + b);
        break;
    case '-':
        printf("print sub of %.2f-%.2f=%.2f", a, b, a - b);
        break;
    case '*':
        printf("print multiplication of %.2f*%.2f=%.2f", a, b, a * b);
        break;
    case '/':
        if (b != 0)
        {
            printf("division of num is %.2f/%.2f=%.2f", a, b, a / b);
        }
        else
        {
            printf("error!value is invalid");
        }
        break;
    default:
        printf("error!the value or operrator you entered is incorrect");
    }
    return 0;
}