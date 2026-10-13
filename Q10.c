// calculation of cut off marks
#include <stdio.h>
int main()
{
    float m, p, c, e;
    float cm;
    printf("enter the marks of mathematics out of 200:");
    scanf("%f", &m);
    printf("enter the marks of physics out of 200:");
    scanf("%f", &p);
    printf("enter the marks of chemistry out of 200:");
    scanf("%f", &c);
    printf("enter the marks of entrance exam out of 100:");
    scanf("%f", &e);
    cm = (m / 2) + (p / 2) + (c / 2) + e;
    printf("total cut off marks is:%.2f\n", cm);
    return 0;
}