// conversion from fehrenheit to centigrade degree
#include <stdio.h>
int main()
{
    float f, c;
    // input value of fehrenheit
    printf("enter the value of fehrenheit:");
    scanf("%f", &f);
    // calculating value of celcious
    c = (f - 32) * 5 / 9;
    // output value printing
    printf("enter the value of centigrade degree:%.2f\n", c);
    return 0;
}