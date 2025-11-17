#include<stdio.h>

double CircleArea(float fRadius)
{
    double Area = 0.0;

    Area = 3.14 * fRadius * fRadius;
    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %f",dRet);


    return 0;
}