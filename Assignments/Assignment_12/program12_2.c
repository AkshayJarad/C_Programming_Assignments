#include<stdio.h>

int print_factors(int no)
{
    int i = 0;
    int iCount = 0;

    for(i = 1; i < (no/2); i++)
    {
        if(no % i == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int number = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&number);

    iRet = print_factors(number);

    printf("Count of factors is : %d\n",iRet);

    return 0;
}