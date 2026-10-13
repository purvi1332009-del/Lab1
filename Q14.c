#include <stdio.h> //identifying capital,small,special letter or digit
int main()
{
    char ch;
    printf("enter any character:");
    scanf("%c", &ch);
    // identifying using if else conditional statement
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("character is uppercase letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("character is lowercase letter.\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("character is digit.\n", ch);
    }
    else
    {
        printf("character is special letter.\n", ch);
    }
    return 0;
}