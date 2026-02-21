#include<iostream>
using namespace std;

template <class T>
void Swap(T no1, T no2)
{
   T temp = no1;

   cout<<"Values Before Swappping\n";
   cout<<"Value 1 : "<<no1<<"\n";
   cout<<"Value 2 : "<<no2<<"\n";
   
   no1 = no2;
   no2 = temp;

   cout<<"Values After Swappping\n";
   cout<<"Value 1 : "<<no1<<"\n";
   cout<<"Value 2 : "<<no2<<"\n";

   
}

int main()
{
    Swap(10,20);

    Swap(10.5f, 20.3f);

    return 0;
}