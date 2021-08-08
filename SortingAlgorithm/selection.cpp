#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min_el_indx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_el_indx])
            {
                min_el_indx = j;
            }
        }
        swap(&arr[min_el_indx], &arr[i]);
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
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArr(arr, n);
    return 0;
}