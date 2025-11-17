#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int freq = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit == 2)
        {
            freq++;
        }
    }
    return freq;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Frequency of two is : %d\n",iRet);
    
    return 0;
}