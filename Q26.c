#include <stdio.h> //print sum of even num
int main()
{
    int i, sum = 0;
    for (i = 0; i <= 100; i = i + 2)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        printf("%d\t", sum);
    }
}