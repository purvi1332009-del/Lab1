// calculating area of triangle
#include <stdio.h>
int main()
{
    float base, height, area;
    // initializing values
    printf("enter the base of triangle:");
    scanf("%f", &base);
    printf("enter the height of triangle:");
    scanf("%f", &height);
    area = (height * base) / 2;
    printf("the area of the triangle is:%.2f\n", area);
    return 0;
}