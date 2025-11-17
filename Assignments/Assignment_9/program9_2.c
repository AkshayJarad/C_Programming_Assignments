#include<stdio.h>

int DollarToINR(int iNo)
{
    int INR = 0;

    INR = iNo * 70;
    return INR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is %d\n",iRet);

    return 0;
}