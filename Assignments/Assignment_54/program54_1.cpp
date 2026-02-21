#include<iostream>
using namespace std;

template <class T>
bool Replace(T *arr, int iSize, T value)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == value)
        {
            return true;
            break;
        }
    }
    return false;

}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 2};
    bool bRet = false;

    bRet = Replace(arr,6,3);

    if(bRet == true)
    {
        cout<<"Searched value is present";
    }
    else
    {
        cout<<"Searched value is not present";
    }


    return 0;
}