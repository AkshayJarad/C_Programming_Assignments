#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    T iMin = arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMin > arr[iCnt])
        {
            iMin = arr[iCnt];
        }
    }
    return iMin;


}

int main()
{
    int arr[] = {10,20,30,40,50};

    float brr[] = {10.0,3.7,9.8,8.7};

   int iSum = Min(arr,5);
    printf("%d\n",iSum);

    float fSum = Min(brr,4);
    printf("%f\n",fSum);

    return 0;
}