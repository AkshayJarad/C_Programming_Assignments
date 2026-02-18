#include<stdio.h>

int ChkFrequency(char *str, char ch)
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

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(str[iCnt] == ch)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character that you want to search : \n");
    scanf(" %c",&cValue);

    iRet = ChkFrequency(Arr,cValue);

    printf("Frequency of %c is : %d\n",cValue,iRet);
}