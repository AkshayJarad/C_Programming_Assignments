#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iAns = 1
    .
    ;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iAns = iAns * iCnt;
        }
    }
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d\n",iRet);

    return 0;
}