#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double RectArea = 0.0;

    RectArea = fWidth * fHeight;
    return RectArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter the width : \n");
    scanf("%f",&fValue1);

    printf("Enter the height : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %f",dRet);

    return 0;
}