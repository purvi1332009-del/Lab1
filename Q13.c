// chech whether no. is even or odd
#include <stdio.h>
int main()
{
    int num;
    printf("enter the integer:");
    scanf("%d", &num);
    // if num divided by2 give reminder 0 then it's even or else odd
    if (num % 2 == 0)
    {
        printf("%d is even.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }
    return 0;
}