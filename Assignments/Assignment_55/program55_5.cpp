#include<iostream>
using namespace std;

template <class T>
T Max(T a, T b, T c, T d)
{
    if(a > b && a > c && a > d)
    {
        return a;
    }
    else if(b > a && b > c && b > d)
    {
        return b;
    }
    else if(c > a && c > b && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{

   int iRet = Max(4,67,21,45);
   float fRet = Max(34.55,23.65,76.43,9.44);

   cout<<iRet<<"\n";
   cout<<fRet<<"\n";

    return 0;
}