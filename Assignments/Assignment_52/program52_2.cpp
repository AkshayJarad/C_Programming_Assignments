#include<iostream>
using namespace std;

template<class T>
T Max(T no1, T no2, T no3)
{
    if(no1 > no2 && no1 > no3)
    {
        return no1;
    }
    else if(no2 > no1 && no2 > no3)
    {
        return no2;
    }
    else
    {
        return no3;
    }
}

int main()
{
    int iRet = Max(10,45,23);
    printf("Largest number is : %d\n",iRet);

    float fRet = Max(10.0f,67.0f,32.0f);
    printf("Largest number is : %f\n",fRet);

    double dRet = Max(12.34,12.2455,12.13455);
    printf("Largest number is : %lf",dRet);

    return 0;
}