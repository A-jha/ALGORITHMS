#include <iostream>
using namespace std;

//merge fuction to merge two subarray in inorted order
//first subarray from start to mid
// second sub array from mide+1 to right
void merge(int arr[], int left, int mid, int right)
{
    int subArr1 = mid - left + 1;
    int subArr2 = right - mid;

    //create temp array
    auto *leftArr = new int[subArr1];
    int rightArr[subArr2];

    //copy data from arr to both sub array
    for (int i = 0; i < subArr1; i++)
    {
        leftArr[i] = arr[i];
    }
    for (int i = 0; i < subArr2; i++)
    {
        rightArr[i] = arr[mid + 1 + i];
    }

    int indexOfSubArr1 = 0;
    int indexOfSubArr2 = 0;
    int indexOfMergedArr = left;

    //merge the temp array back into array[left to right]
    while (indexOfSubArr1 < subArr1 && indexOfSubArr2 < subArr2)
    {
        if (leftArr[indexOfSubArr1] <= rightArr[indexOfSubArr2])
        {
            arr[indexOfMergedArr] = leftArr[indexOfSubArr1];
            indexOfSubArr1++;
        }
        else
        {
            arr[indexOfMergedArr] = rightArr[indexOfSubArr2];
            indexOfSubArr2++;
        }
        indexOfMergedArr++;
    }
    //if there are any el in left array thrn copy first
    while (indexOfSubArr1 < subArr1)
    {
        arr[indexOfMergedArr] = leftArr[indexOfSubArr1];
        indexOfMergedArr++;
        indexOfSubArr1++;
    }
    //if there is any right array el remaining
    while (indexOfSubArr2 < subArr2)
    {
        arr[indexOfMergedArr] = rightArr[indexOfSubArr2];
        indexOfMergedArr++;
        indexOfSubArr2++;
    }
}

//begin --- left index of array
//right--- right index of array
void mergeSort(int arr[], int begin, int end)
{
    if (begin >= end)
    {
        return;
    }

    int mid = begin + (end - begin) / 2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
}

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArr(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArr(arr, arr_size);
    return 0;
}