#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Decimal      Hex      Octal      Char\n");
    printf("---------------------------------------------------------------");

    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("%c\t  %d\t   %o\t   %x\n",iCnt,iCnt,iCnt,iCnt);
    }

    printf("---------------------------------------------------------------");
}

int main()
{
    DisplayASCII();

    return 0;
}