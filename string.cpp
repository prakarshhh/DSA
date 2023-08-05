#include <iostream>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
#include <set>
#include <stack>
#include <hash_map>
#include <unordered_map>
using namespace std;
// Remove leading and trailing spaces
// count last word

// int main()
// {
//     string s = "   fly me   to   the moon  ";
//     int count = 0, count1 = 0, last_word = 0;
//     int len = s.length();
//     cout<<s[len-1];

    // if (s[0] == ' ')
    // {
    //     for (int i = 0; i < s.length(); i++)
    //     {
    //         if (s[i] == ' ')
    //         {
    //             count++;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     s.erase(0, count);
    // }
    // int len1 = s.length();
    // if (s[len1 - 1] == ' ')
    // {

    //     for (int i = len1 - 1; i >= 0; i--)
    //     {
    //         if (s[i] == ' ')
    //         {
    //             count1++;
    //             s1 = i;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     s.erase(s1, len1 - 1);
    // }
    // int len2 = s.length();

    // for (int i = len2 - 1; i>=0; i--)
    // {
    //     if(s[i]!=' ')
    //     {
    //         last_word++;
    //     }
    //     else
    //     break;
    // }
    // cout << endl
    //      << last_word;

// }

// int main()
// {
//     unordered_map<char, int> h;
//     string st = "";
//     string s1 = "abcd";
//     string s2 = "abcde";
//     int l1 = s1.length();
//     int l2 = s2.length();
//     char str[l1 + l2];
//     int i, j, k = 0;
//     for (i = 0; i < l1; i++)
//     {
//         str[i] = s1[i];
//     }
//     for (j = l1; j < l1 + l2; j++)
//     {
//         str[j] = s2[k];
//         k++;
//     }
//     int size=sizeof(str)/sizeof(*str);
//     sort(str,str+size);
//     cout<<endl<<size<<endl;
//     for (int i = 0; i < l1 + l2; i++)
//     {
//         cout << str[i];
//     }
//     for (char i : str)
//     {
//         h[i]++;
//     }
//     for (auto e : h)
//     {
//         if (e.second == 1)
//         {
//             cout<<endl<<e.first;
//         }
//     }
    
// }


int main()
{
    char str[4]={"abcd","adssad","dasdasas","dasdsa"};
    cout<<str[0];
}