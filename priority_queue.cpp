#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //Max heap
    priority_queue <int> maxheap;
    //Min heap
    priority_queue <int ,vector <int>,greater<int>> minheap;

    maxheap.push(12);
    maxheap.push(23);
    maxheap.push(34);
    maxheap.push(54);
    maxheap.push(67);
    int n=maxheap.size();
    cout<<endl<<n;
    cout<<endl;
    cout<<endl<<maxheap.top();
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<maxheap.top()<<" ";
        maxheap.pop();
    }
    minheap.push(132);
    minheap.push(1);
    minheap.push(33);
    minheap.push(11);
    minheap.push(12);
    cout<<endl<<minheap.top();
    int n1=minheap.size();
    cout<<endl;
    for(int i=0;i<n1;i++)
    {
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
}