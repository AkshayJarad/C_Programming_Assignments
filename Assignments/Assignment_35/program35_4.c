#include<stdio.h>
#include<stdbool.h>

bool CountVowels(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter the string : ");
    scanf("%[^\n]s",Arr);

    bRet = CountVowels(Arr);

    if(bRet == true)
    {
        printf("vowel is present\n");
    }
    else
    {
        printf("vowel is not present");
    }

    return 0;
}