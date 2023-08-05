#include <iostream>
using namespace std;
#include <hash_map>
#include <unordered_map>
int main()
{
    unordered_map <char ,int> h;
    string str="leetcode";
    for(int i:str)
    {
        h[i]++;
    }
    for(auto e:h)
    {
        cout<<e.first<<" "<<e.second<<endl; 
    }
}