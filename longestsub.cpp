#include <iostream>
using namespace std;
// int main()
// {
//     int arr[]={1,2,3,1,1,1,1};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++)
//     {
//         int sum=0;
//         for(int j=i;j<size;j++)
//         {
//             for(int k=i;k<j;k++)
//             {
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }

int main()
{
    string s = "abbaca";
    for(int i=0;i<s.length();i++)
    {
        if (s[i] == s[i + 1])
        {
            i=0;
            s.erase(i, i + 1);
        }
    }
    cout << s;
}