#include<stdio.h>

void CheckEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}

int main()
{
    int number;

    printf("Enter number : \n");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}