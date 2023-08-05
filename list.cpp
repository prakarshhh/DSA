 #include <iostream>
 #include <list>
 using namespace std;

 int main()
 {
    list <int> l={1,2,45,66,90};
    for(int i:l)
    {
        cout<<i<<" ";
    }
    list <int> l1(5,10);
    cout<<endl;
    for(int i:l1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    list <int> l2;
    cout<<l2.size();
    l2.push_front(10000);
    l2.push_back(500);
    
    cout<<endl;
    for(int i:l2)
    {
        cout<<i<<" ";
    }
 }