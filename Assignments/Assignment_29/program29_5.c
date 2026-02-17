#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, inum = 1, iCnt = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",inum);
            inum = inum + 1;
        }
        printf("\n\n");
        iCnt++;
        inum = iCnt;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}