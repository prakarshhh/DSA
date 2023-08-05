#include <iostream>
using namespace std;
void merge(int arr[], int first, int middle, int last)
{
    int n1 = middle - first + 1;
    int n2 = last - middle;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[first + i];
    }
    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[middle + 1 + j];
    }
    int i = 0, j = 0, k = first;
    while (i < n1 && j < n2)
    {
        if (b[j] < a[i])
        {
            arr[k] = b[j];
            k++;
            j++;
        }
        else
        {
            arr[k] = a[i];
            k++;
            i++;
        }
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
}

void merge_sort(int arr[], int f, int e)
{
    if (f < e)
    {
        int mid = (f + e) / 2;
        merge_sort(arr, f, mid);
        merge_sort(arr, mid + 1, e);
        merge(arr, f, mid, e);
    }
}

int main()
{
    int arr[] = {6,3,9,5,2,8,7,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int e = size - 1;
    int f = 0;
    merge_sort(arr, f, e);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}