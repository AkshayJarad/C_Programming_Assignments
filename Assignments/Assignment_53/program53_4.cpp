#include<iostream>
using namespace std;

template<class T>

T SecondSmall(T *arr, int iSize)
{
    int iCnt = 0;

    T smallest, secSmallest = 0;

    if(arr[0] < arr[1])
    {
        smallest = arr[0];
        secSmallest = arr[1];
    }
    else
    {
        smallest = arr[1];
        secSmallest = arr[0];
    }

    for(iCnt = 2; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < smallest)
        {
            secSmallest = smallest;
            smallest = arr[iCnt];
        }
        else if(arr[iCnt] < secSmallest && arr[iCnt] != smallest)
        {
            secSmallest = arr[iCnt];
        }
    }
    return secSmallest;
    
}

int main()
{
    int Arr1[] = {10,4,30,40,50};
    int iRet = 0;

    iRet = SecondSmall(Arr1,5);

    cout<<iRet;
     
    return 0;
}