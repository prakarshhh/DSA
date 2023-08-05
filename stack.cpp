#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <string> str;
    str.push("Hello");
    str.push("Hiiii");
    str.push("Byeee");
    cout<<str.top();
    str.pop();
    cout<<endl<<str.top();
    cout<<endl<<str.size();
    cout<<endl<<endl;
    stack <int> sk;
    sk.push(12);
    sk.push(1);
    sk.push(100);
    cout<<sk.top();
    cout<<endl;
    int n=sk.size();
    for(int i=0;i<n;i++)
    {
        cout<<sk.top()<<" ";
        sk.pop();
    }
    
}