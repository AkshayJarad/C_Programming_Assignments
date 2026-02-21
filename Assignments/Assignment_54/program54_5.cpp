#include<iostream>
using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
    int iCnt = 0;
    T Min = arr[0];

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(arr[iCnt] < Min)
        {
            Min = arr[iCnt];
        }
    }
    return Min;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 2};
    int iRet = 0;

    iRet = Min(arr,6);
  
    cout<<iRet;

    return 0;
}