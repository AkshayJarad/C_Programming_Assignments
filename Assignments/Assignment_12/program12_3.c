#include<stdio.h>

int sum_of_factors(int no)
{
    int i = 0;
    int iSum = 0;

    for(i = 1; i < (no/2); i++)
    {
        if(no % i == 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

int main()
{
    int number = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&number);

    iRet = sum_of_factors(number);

    printf("Addition of factors is : %d\n",iRet);

    return 0;
}