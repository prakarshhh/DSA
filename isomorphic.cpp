#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    string s = "paper";
    string t = "title";
    unordered_map<char, int> h;
    unordered_map<char, int> h1;
    int c = 0, c1 = 0;
    if (s.length() == t.length())
    {
        for (int ch : s)
        {
            h[ch]++;
        }
        for (int ch1 : t)
        {
            h1[ch1]++;
        }
        for (auto e : h)
        {
            cout << e.first << " " << e.second << endl;
        }
        cout<<endl;
        for (auto e : h1)
        {
            cout << e.first << " " << e.second << endl;
        }
        for (auto e : h)
        {
            if (e.second >= 2)
            {
                c = 1;
            }
            
        }
        for (auto e : h1)
        {
            if (e.second >= 2)
            {
                c1 = 1;
            }
            
        }
        if (c != c1)
        {
            cout << false;
        }
        else
        {
            cout << true;
        }
    }
    else
    {
        cout << false;
    }
    
}