#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        cout<<arr[iCnt]<<"\t";
    }
 
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 2};

    Reverse(arr,6);

    return 0;
}