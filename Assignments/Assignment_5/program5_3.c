#include<stdio.h>

void CheckLeapYear(int year)
{
    if(year % 400 == 0)
    {
        printf("It is a leap year\n");
    }
    else if(year % 100 == 0)
    {
        printf("It is not a leap year\n");
    }
    else if(year % 4 == 0)
    {
        printf("It is a leap year\n");
    }
    else
    {
        printf("It is not a leap year\n");
    }
}

int main()
{
    int yr;

    printf("Enter the year : \n");
    scanf("%d",&yr);

    CheckLeapYear(yr);


    return 0;
}