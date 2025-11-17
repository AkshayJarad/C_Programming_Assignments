#include<stdio.h>

void CheckNumberType(int no)
{
    if(no > 0)
    {
        printf("Number is a positive number \n");
    }
    else if(no < 0)
    {
        printf("Number is a negative number\n");
    }
    else
    {
        printf("It is a zero");
    }
}

int main()
{
    int number;

    printf("Enter the number : \n");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}