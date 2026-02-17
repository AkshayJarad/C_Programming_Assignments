#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, inum1 = 1;
    char ch = 'a';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",inum1);
                inum1 = inum1 + 1;
            }
            else
            {
                printf("%c\t",ch);
                ch++;
            }

            if(inum1 == 6 || ch == 'f')
            {
                inum1 = 1;
                ch = 'a';
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