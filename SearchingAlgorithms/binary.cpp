#include <iostream>
using namespace std;

int binarySearch(int A[], int x, int start, int end)
{
    //find midpoint
    if (end >= start)
    {
        int mid = (start + end) / 2;

        if (A[mid] == x)
        {
            return mid;
        }
        else if (A[mid] < x)
        {
            return binarySearch(A, x, mid + 1, end);
        }
        else if (A[mid] > x)
        {
            return binarySearch(A, x, start, mid - 1);
        }
    }
    return -1;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6};
    int pos = binarySearch(A, 3, 0, 5);
    cout << "Found at position: " << pos << "\n";
}