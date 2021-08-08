#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> A, int x)
{
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == x)
        {
            return i;
        }
    }
    cout << "Not found";
    return 0;
}

int main()
{
    vector<int> array;
    int n;
    cout << "enter the number of elements\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    int post = linearSearch(array, 5);
    post ? cout << "5 is at position " << post : cout << "Not in the data";
}