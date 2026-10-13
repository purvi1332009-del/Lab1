#include <stdio.h> //finding max no. using conditional operator
int main()
{
    int a, b, c, max;
    printf("enter the value:");
    scanf("%d%d%d", &a, &b, &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("the max no.is:\n%d", max);
    return 0;
}