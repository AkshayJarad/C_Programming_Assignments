#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize)
{
    T iMax = arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < arr[iCnt])
        {
            iMax = arr[iCnt];
        }
    }
    return iMax;


}

int main()
{
    int arr[] = {10,20,30,40,50};

    float brr[] = {10.0,3.7,9.8,8.7};

   int iSum = Max(arr,5);
    printf("%d\n",iSum);

    float fSum = Max(brr,4);
    printf("%f\n",fSum);

    return 0;
}