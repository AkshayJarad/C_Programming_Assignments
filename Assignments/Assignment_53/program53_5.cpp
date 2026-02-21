#include<iostream>
using namespace std;

template <class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == oldVal)
        {
            arr[iCnt] = newVal;
        }
    }

    cout<<"Updated Array : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<arr[iCnt]<<"\t";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 2};

    Replace(arr,6,2,9);


    return 0;
}