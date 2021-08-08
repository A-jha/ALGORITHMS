#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int key;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; //for j = 0 ot arr[j]>key
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}