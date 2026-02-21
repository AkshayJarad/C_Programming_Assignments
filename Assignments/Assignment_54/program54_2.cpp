#include<iostream>
using namespace std;

template <class T>
T SumEven(T *arr, int iSize)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] % 2 == 0)
        {
            Sum = Sum + arr[iCnt];
        }
    }
    return Sum;

}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 2};
    int iRet = 0;

    iRet = SumEven(arr,6);

    cout<<iRet;

    return 0;
}