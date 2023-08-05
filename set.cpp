#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(45);
    s.insert(3);
    s.insert(5);
    s.insert(0);
    for(int i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(s.begin());
    for(int i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator itr=s.begin();
    itr++;
    s.erase(s.begin());
    for(int i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    set <int>::iterator it=s.find(3);
    for(auto i=it;i!=s.end();i++)
    {
        cout<<*i<<" ";
    }

}