#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dRet = 0.0;

    dRet = (fTemp-32) * (5.0/9.0);
    return dRet;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter tempreature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("tempreature in celcius is : %f",dRet);


    return 0;
}