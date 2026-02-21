#include<iostream>
using namespace std;

template<class T>

T SecondMax(T *arr, int iSize)
{
    int iCnt = 0;
    T Brr[50];

    T largest, secLargest = 0;

    if(arr[0] > arr[1])
    {
        largest = arr[0];
        secLargest = arr[1];
    }
    else
    {
        largest = arr[1];
        secLargest = arr[0];
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > largest)
        {
            secLargest = largest;
            largest = arr[iCnt];
        }
        else if(arr[iCnt] > secLargest && arr[iCnt] != largest)
        {
            secLargest = arr[iCnt];
        }
    }
    return secLargest;
    
}

int main()
{
    int Arr1[] = {10,4,30,40,50};
    int iRet = 0;

    iRet = SecondMax(Arr1,5);

    cout<<iRet;
     
    return 0;
}