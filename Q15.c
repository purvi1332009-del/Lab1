// calculating marks of 5 sub. and giving division
#include <stdio.h>
int main()
{
    float maths, che, phy, eng, computer;
    float total_marks, percentage;
    printf("enter the marks of math:");
    scanf("%f", &maths);
    printf("enter the marks of chemistry:");
    scanf("%f", &che);
    printf("enterthe marks of physics:");
    scanf("%f", &phy);
    printf("enter the marks of english:");
    scanf("%f", &eng);
    printf("enter the marks of computer:");
    scanf("%f", &computer);
    total_marks = maths + che + phy + eng + computer;
    percentage = (total_marks) / 5;
    if (percentage >= 90) // condition
    {
        printf("division is A");
    }
    if (percentage >= 80)
    {
        printf("division is B");
    }
    if (percentage <= 70)

    {
        printf("division is C or below");
    }
    if (percentage < 0 || percentage > 100)
    {
        printf("invalid percentage");
    }
    return 0;
}