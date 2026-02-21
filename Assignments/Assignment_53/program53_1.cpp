#include<iostream>
using namespace std;

template<class T>

void CopyArray(T *src, T *dest, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<dest[iCnt]<<"\t";
    }
    printf("\n");
}

int main()
{
    int Arr1[] = {10,20,30,40,50};
    int Brr1[30];

    float Arr2[] = {10.2,20.4,23.56,55.4,44.56};
    float Brr2[30];

    CopyArray(Arr1,Brr1,5);
    CopyArray(Arr2,Brr2,5);


    return 0;
}