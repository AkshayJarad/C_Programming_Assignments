#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int no)
{
    if(no % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&number);

    bRet = is_divisible_by_five(number);

    if(bRet == true)
    {
        printf("%d is divisible by 5",number);
    }
    else
    {
        printf("%d is not divisible by 5",number);
    }


    return 0;
}