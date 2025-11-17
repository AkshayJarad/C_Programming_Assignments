#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iRet = 0;
    iRet = iNo * 1000;
    return iRet;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the distance : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is : %d\n",iRet);

    return 0;
}