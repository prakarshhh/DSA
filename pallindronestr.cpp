#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = " ";
    string str1 = "";
    string strrev = "";
    int count = 0;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            str1 += str[i];
        }
    }
    int len = str1.length();
    for (int i = len - 1; i >= 0; i--)
    {
        strrev += str1[i];
    }
    for (int i = 0; i < strrev.length(); i++)
    {
        if (str1[i] == strrev[i])
        {
            count++;
        }
    }
    if (count == len)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}