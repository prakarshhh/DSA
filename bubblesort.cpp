#include <iostream>
using namespace std;

void bubble_sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={5,8,1,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
}