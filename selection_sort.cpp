#include <iostream>
using namespace std;

void bubble_sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   for(int i=0;i<size;i++)
   {
    cout<<arr[i]<<" ";
   }
}

int main()
{
    int arr[]={5,1,8,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
}