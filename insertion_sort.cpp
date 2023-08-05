#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (j; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {5, 8, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, size);
}