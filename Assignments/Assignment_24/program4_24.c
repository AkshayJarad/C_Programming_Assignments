#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iDigit = 0;
    int iCount = 0;
    int iCnt = 0;
    int iCopy = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iCopy = Arr[iCnt];
        iCount = 0;

        while(iCopy != 0)
        {
            iDigit = iCopy % 10;
            iCopy = iCopy / 10;
            iCount++;
        }

        if(iCount == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
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

    Digits(p, iSize);

    free(p);

    return 0;
}