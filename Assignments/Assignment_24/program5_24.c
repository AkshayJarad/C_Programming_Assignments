#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iDigit = 0;
    int iSum = 0;
    int iCnt = 0;
    int iCopy = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iCopy = Arr[iCnt];
        iSum = 0;

        while(iCopy != 0)
        {
            iDigit = iCopy % 10;
            iCopy = iCopy / 10;
            iSum = iSum + iDigit;
        }
        printf("%d\t",iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);

    return 0;
}