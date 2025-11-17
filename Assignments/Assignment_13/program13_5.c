#include<stdio.h>

int sum_even_numbers(int limit)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int limit = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&limit);

    iRet = sum_even_numbers(limit);
    printf("Adddition of first N even natural numbers is : %d\n",iRet);


    return 0;
}