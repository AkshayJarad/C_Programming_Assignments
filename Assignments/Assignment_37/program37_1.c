#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    int iLength = 0;
    int iCnt = 0;
    char *p = str;

    while(*p != '\0')
    {
        iLength++;
        p++;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(str[iCnt] == ch)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character to be searched : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == true)
    {
        printf("%c is present ",cValue);
    }
    else
    {
        printf("%c is not present",cValue);
    }



    return 0;
}