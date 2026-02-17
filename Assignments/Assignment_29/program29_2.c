#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, inum1 = 0, inum2 = -1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",inum2+2);
                inum2 = inum2 + 2;
            }
            else
            {
                printf("%d\t",inum1+2);
                inum1 = inum1 + 2;
            }

            if(inum1 == 10 || inum2 == 9)
            {
                inum1 = 0;
                inum2 = -1;
            }
        }
        printf("\n");
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