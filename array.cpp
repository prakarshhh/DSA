#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int,4> a={2,5,7,8};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Element at 2nd index: "<<a.at(2);
    cout<<endl<<"Array empty or not: "<<a.empty();
    cout<<endl<<"First element of the array: "<<a.front();
    cout<<endl<<"Last element of the array: "<<a.back();
}