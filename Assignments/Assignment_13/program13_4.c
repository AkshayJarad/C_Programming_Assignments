#include<stdio.h>

int sum_natural_numbers(int limit)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int limit = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&limit);

    iRet = sum_natural_numbers(limit);
    printf("Adddition of first N natural numbers is : %d\n",iRet);


    return 0;
}