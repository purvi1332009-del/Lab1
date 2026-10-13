#include <stdio.h> //print ASCII code of any character
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c", &ch);
    printf("ASCII code of this character is:\n%c%d", ch, ch);
    return 0;
}