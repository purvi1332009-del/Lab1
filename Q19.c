// check whether character is small case or not
#include <stdio.h>
int main()
{
    char ch;
    printf("enter char:");
    scanf("%c", &ch);
    (ch >= 'a' && ch <= 'z')
        ? printf("the char is lower case=%c", ch)
        : printf("the char is not lower case=%c", ch);
    return 0;
}