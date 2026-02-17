#include<stdio.h>

void Display(char ch)
{
    printf("ASCII value in Decimal     : %d\n", ch);
    printf("ASCII value in Octal       : %o\n", ch);
    printf("ASCII value in Hexadecimal : %X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}