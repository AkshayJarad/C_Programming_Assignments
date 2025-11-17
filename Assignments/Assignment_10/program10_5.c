#include<stdio.h>

double SquareMeter(int iValue)
{
    double dRet = 0.0;

    dRet = iValue * 0.0929;
    return dRet;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square feet to Square meter is : %f",dRet);


    return 0;
}