// swap value of two var without using third var
#include <stdio.h>
int main()
{
    float a, b;
    printf("enter the value of a:");
    scanf("%f", &a);
    printf("enter the value of b:");
    scanf("%f", &b);
    // logic of swapping
    a = a + b;
    b = a - b; // givinf value of b to a
    a = a - b; // giving value of b to a
    printf("the value of a is:%.2f\n", a);
    printf("the value of b is:%.2f\n", b);
    return 0;
}