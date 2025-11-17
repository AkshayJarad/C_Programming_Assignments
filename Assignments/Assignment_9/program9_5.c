#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFact1 = 1;
    int iFact2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact1 = iFact1 * iCnt;
        }
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact2 = iFact2 * iCnt;
        }
    }

    return iFact2 - iFact1;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d\n",iRet);


    return 0;
}