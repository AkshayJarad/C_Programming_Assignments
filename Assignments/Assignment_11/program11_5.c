#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
        exit(1);
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);


    return 0;
}