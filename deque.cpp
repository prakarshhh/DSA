#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d={1,45,6,7,12,10};
    
    for(int i:d)
    {
        cout<<" "<<i;
    }
    cout<<endl;
    d.push_back(100);
    for(int i:d)
    {
        cout<<" "<<i;
    }
    cout<<endl;
    d.push_front(210);
    for(int i:d)
    {
        cout<<" "<<i;
    }
    cout<<endl<<d.front();
    cout<<endl<<d.back();
    cout<<endl<<d.at(4);
    cout<<endl<<d.empty();
    cout<<endl<<d.size();
    cout<<endl;
    d.erase(d.begin(),d.begin()+3);
    for(int i:d)
    {
        cout<<" "<<i;
    }


}