#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iLength = 0;
    char *p = str;
    int iCount = 0;

    while(*p != '\0')
    {
        iLength++;
        p++;
    }

    iCount = iLength;

    for(iCnt = iLength; iCnt >= 0; iCnt--)
    {
        if(str[iCnt] == ch)
        {
            return iCount;
        }
        iCount--;
    }
    return -1;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);

    printf("Character location is : %d\n",iRet);
}