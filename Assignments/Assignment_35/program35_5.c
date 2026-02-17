#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 0;
    char *p = str;
    int iLength = 0;


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
    char Arr[20];

    printf("Enter the string : ");
    scanf("%[^\n]s",Arr);

    Reverse(Arr);

    return 0;
}