#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector <int> a{1,2};
    for(int j:a)
    {
        cout<<j<<" ";
    }
    cout<<endl<<"Capacity of the vector: "<<v.capacity();
    v.push_back(10);
    cout<<endl<<"Capacity of the vector: "<<v.capacity();
    v.push_back(15);
    cout<<endl<<"Capacity of the vector: "<<v.capacity();
    v.push_back(22);
    cout<<endl<<"Capacity of the vector: "<<v.capacity();
    v.push_back(30);
    cout<<endl<<"Capacity of the vector: "<<v.capacity();
    v.push_back(35);
    cout<<endl<<"Capacity of the vector: "<<v.capacity();
    cout<<endl<<"Before pop_back: ";
    for(int i:v)
    {
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<endl<<"After pop_back: ";
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"First element: "<<v.front();
    cout<<endl<<"Last element: "<<v.back();

}