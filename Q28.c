// check whether no. is armstrong or not
#include <stdio.h>
int main()
{
    int num, q, sum = 0, tamp;
    printf("enter num");
    scanf("%d", &num);
    tamp = num;
    while (num != 0)
    {
        q = num % 10;
        sum = sum + q * q * q;
        num = num / 10;
    }
    if (tamp == sum)
    {
        printf("num is armstrong=%d", tamp);
    }
    else
    {
        printf("num is not armstrong=%d", tamp);
    }
    return 0;
}