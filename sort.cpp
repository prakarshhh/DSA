#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[]={1,9,2,20000,8,10};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<" "<<arr[i];
    // }

    // LIST IN STL

    list<int> l{1, 3, 1, 65, 100};
    l.push_back(200);
    l.push_front(12331);
    l.pop_back();
    l.pop_front();
    l.sort(greater<int>());
    for (auto i : l)
    {
        cout << i << endl;
    }
    cout<<endl;

    cout<<l.size();
    char ch[]={'j','u','h','i'};
    int n=sizeof(ch)/sizeof(ch[0]);
    cout<<n;
    int len=strlen(ch);
    cout<<len;
}