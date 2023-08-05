#include <iostream>
using namespace std;

void substr(string input,string ouput,int index)
{
    if(index==input.length())
    {
        cout<<ouput<<endl;
        return;
    }
    substr(input,ouput,index+1);
    substr(input,ouput+input[index],index+1);
}

int main()
{
    string str="abc";
    cout<<"All subsequences are: "<<endl;
    substr(str,"",0);
}