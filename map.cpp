#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int,string> m;
    m[1]="Love";
    m[2]="babbar";
    m[23]="Hello";
    m[19]="OKkk";
    m.insert({5,"Bye"});
    for(auto i:m)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }   
    auto it=m.find(5);
    cout<<endl;
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<" ";
    }
}