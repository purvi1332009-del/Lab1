// print sum of each digit of any 'n' digit no.
#include <stdio.h>
int main()
{
    int num, q, sum = 0;
    printf("enter num");
    scanf("%d", &num);
    while (num != 0)
    {
        q = num % 10;
        sum = sum + q;
        num = num / 10;
    }
    printf("sum=%d", sum);
    return 0;
}