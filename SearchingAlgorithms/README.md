# Searching Algorithms

- Algorithms to Find data in data Structure.

# 1. Linear / Sequential Search

Start from one end and scan whole data in a linear order

The time complexity of the algorithm is O(n).

# 2. Binary Search

Search a **sorted array** by repeatedly dividing the search interval in half.

If Array is not sorted then sort first to apply binary search.

the time complexity to O(Log n).

```
Algorithm:
Compare x with the middle element.

If x matches with the middle element, we return the mid index.

Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.

Else (x is smaller) recur for the left half.
```

# 3. Fibonacci Search

Fibonacci Search is a comparison-based technique that uses Fibonacci numbers to search an element in a sorted array.

### Similarity to binary Search

It Works with Sorted Array

A divide conquer Algorithm

Time complexity of log(n)

### Differnce with Binary Search

Fibonacci Search divides given array into unequal parts

Binary Search uses a division operator to divide range. Fibonacci Search doesn’t use /, but uses + and -. The division operator may be costly on some CPUs.

Fibonacci Search examines relatively closer elements in subsequent steps. So when the input array is big that cannot fit in CPU cache or even in RAM, Fibonacci Search can be useful.

```
Algorithm: Let arr[0..n-1] be the input array and the element to be searched be x.

1.Find the smallest Fibonacci Number greater than or equal to n. Let this number be fibM [m’th Fibonacci Number]. Let the two Fibonacci numbers preceding it be fibMm1 [(m-1)’th Fibonacci Number] and fibMm2 [(m-2)’th Fibonacci Number].

2. While the array has elements to be inspected:
    1.Compare x with the last element of the range covered by fibMm2

    2.If x matches, return index

    3.Else If x is less than the element, move the three Fibonacci variables two Fibonacci down, indicating elimination of approximately rear two-third of the remaining array.

    4.Else x is greater than the element, move the three Fibonacci variables one Fibonacci down. Reset offset to index. Together these indicate the elimination of approximately front one-third of the remaining array.

3. Since there might be a single element remaining for comparison, check if fibMm1 is 1. If Yes, compare x with that remaining element. If match, return index.
```

# 3. Binary search in C++ STL

1. binary_search(start_ptr, end_ptr, num) : This function returns boolean true if the element is present in the container, else returns false.

```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // initializing vector of integers
    vector<int> arr = {10, 15, 20, 25, 30, 35};

    // using binary_search to check if 15 exists
    if (binary_search(arr.begin(), arr.end(), 15))
       cout << "15 exists in vector";
    else
       cout << "15 does not exist";

    cout << endl;

    // using binary_search to check if 23 exists
    if (binary_search(arr.begin(), arr.end(), 23))
         cout << "23 exists in vector";
    else
         cout << "23 does not exist";

    cout << endl;
}
```

2. lower_bound(start_ptr, end_ptr, num) : Returns pointer to “position of num” if container contains 1 occurrence of num. Returns pointer to “first position of num” if container contains multiple occurrence of num. Returns pointer to “position of next higher number than num” if container does not contain occurrence of num. Subtracting the pointer to 1st position i.e “vect.begin()” returns the actual index.

```C++
#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr1 = {10, 15, 20, 25, 30, 35};

    vector<int> arr2 = {10, 15, 20, 20, 25, 30, 35};

    vector<int> arr3 = {10, 15, 25, 30, 35};

    cout << "The position of 20 using lower_bound "
            " (in single occurrence case) : ";
    cout << lower_bound(arr1.begin(), arr1.end(), 20)
            - arr1.begin();

    cout << endl;

    cout << "The position of 20 using lower_bound "
             "(in multiple occurrence case) : ";
    cout << lower_bound(arr2.begin(), arr2.end(), 20)
            - arr2.begin();

    cout << endl;

    cout << "The position of 20 using lower_bound "
             "(in no occurrence case) : ";
    cout << lower_bound(arr3.begin(), arr3.end(), 20)
            - arr3.begin();

    cout << endl;
}
```

3. upper_bound(start_ptr, end_ptr, num) : Returns pointer to “position of next higher number than num” if container contains 1 occurrence of num. Returns pointer to “first position of next higher number than last occurrence of num” if container contains multiple occurrence of num. Returns pointer to “position of next higher number than num” if container does not contain occurrence of num. Subtracting the pointer to 1st position i.e “vect.begin()” returns the actual index.

```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{s
    vector<int> arr1 = {10, 15, 20, 25, 30, 35};

    vector<int> arr2 = {10, 15, 20, 20, 25, 30, 35};

    vector<int> arr3 = {10, 15, 25, 30, 35};

    cout << "The position of 20 using upper_bound"
           " (in single occurrence case) : ";
    cout << upper_bound(arr1.begin(), arr1.end(), 20)
            - arr1.begin();

    cout << endl;

    cout << "The position of 20 using upper_bound "
             "(in multiple occurrence case) : ";
    cout << upper_bound(arr2.begin(), arr2.end(), 20)
            - arr2.begin();

    cout << endl;

    cout << "The position of 20 using upper_bound"
            " (in no occurrence case) : ";
    cout << upper_bound(arr3.begin(), arr3.end(), 20)
           - arr3.begin();

    cout << endl;
}

```
