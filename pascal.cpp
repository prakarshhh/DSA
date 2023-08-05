
#include <iostream>
using namespace std;

int fact(int num)
{
    int fc=1;
    for (int i = 1; i <= num; i++)
    {
        fc = fc * i;
        
    }
    return fc;
}
int combination(int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}


int main()
{
    int i, j, k, l, m = 0,num=5;

    for (int i = 0; i < num; i++)
    {

        for (j = 0; j <= i; j++)
        {
            if(i==0)
            {
            cout <<combination(i,j);

            }
            else{

            cout <<combination(i,j)<<"*";
            }

        }
        cout << endl;
    }
    int fnc=fact(5);
    cout<<endl<<fnc;
}