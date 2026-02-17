#include<stdio.h>

int Difference(char *str)
{
    int iCap = 0, iSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCap++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        str++;
    }
    return iSmall - iCap;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^\n]s",Arr);

    iRet = Difference(Arr);

    printf("Difference is : %d\n",iRet);

    return 0;
}