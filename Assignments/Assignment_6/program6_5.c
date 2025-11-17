#include<stdio.h>

float Percentage(int iTotal, int iMarks)
{
    float fAns = 0.0;

    if(iTotal == 0)
    {
        return 0;
    }

    if(iMarks == 0)
    {
        return 0;
    }

    fAns = ((float)iMarks / (float)iTotal) * 100;
    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : \n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is : %f",fRet);


    return 0;
}