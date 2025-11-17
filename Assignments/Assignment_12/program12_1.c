#include<stdio.h>

void print_factors(int no)
{
    int i = 0;

    for(i = 1; i < (no/2); i++)
    {
        if(no % i == 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int number = 0;

    printf("Enter the number : \n");
    scanf("%d",&number);

    print_factors(number);

    return 0;
}