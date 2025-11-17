#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("It is not a Vowel\n");
    }

    return 0;
}