#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue <int> qu;
    qu.push(1);
    qu.push(8);
    qu.push(10);
    cout<<qu.front();
    cout<<endl;
    int n=qu.size();
    for(int i=0;i<n;i++)
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }
    cout<<endl<<qu.front();
    cout<<endl<<qu.size();
}