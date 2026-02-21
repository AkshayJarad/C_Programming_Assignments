#include<iostream>
using namespace std;

template <class T>
T Div(T no1, T no2)
{
    return no1 / no2;
}

int main()
{
    int iRet = Div(10,20);
    cout<<iRet<<"\n";

    float fRet = Div(10.5f, 20.3f);
    cout<<fRet<<"\n";

    return 0;
}