#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch != '[')
        {
            printf("%c\t",ch);
            ch++;
        }
    }

    if(ch >= 'a' && ch <= 'z')
    {
        while(ch != '`')
        {
            printf("%c\t",ch);
            ch--;
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}