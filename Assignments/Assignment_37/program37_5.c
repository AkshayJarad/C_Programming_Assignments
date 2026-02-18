#include<stdio.h>

void StrRevX(char *str)
{
    int iLength = 0;
    int iCnt = 0;
    char *p = str;

    while(*p != '\0')
    {
        iLength++;
        p++;
    }

    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
       printf("%c",str[iCnt]);
    }
 
}

int main()
{
    char Arr[100];

    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    return 0;
}