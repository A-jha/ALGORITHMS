# Sorting Algorithms

## 1. Selection Sort

Find the minimum element in the array and set it to proper position the find second minimum and so on.

## 2. Bubble Sort

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

> ### Time Complexity : O(n<sup>2</sup>)

```
First Pass:
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

Second Pass:
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )
Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.

Third Pass:
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
```

## 3. Insertion Sort

The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

- insertion sort must be applied using list such that during insertion we do not need to adjst the element .

> ### Time Complexity: O(n^2)

```
Algorithm

To sort an array of size n in ascending order:

1: Iterate from arr[1] to arr[n] over the array.

2: Compare the current element (key) to its predecessor.

3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
```

## 4. Merge Sort

Merge Sort is a Divide and Conquer algorithm.

It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.

The merge() function is used for merging two halves.

Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation.

> ### T(n) = 2T(n/2) + θ(n)

solution of the recurrence is θ(nLogn).

Time Complexity : O(nlog(n))

```
MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:
             middle m = l+ (r-l)/2
     2. Call mergeSort for first half:
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
```

## 5. Quick Sort

Like Merge Sort, QuickSort is a Divide and Conquer algorithm.

It picks an element as pivot and partitions the given array around the picked pivot.

There are many different versions of quickSort that pick pivot in different ways.

- Always pick first element as pivot.
- Always pick last element as pivot (implemented below)
- Pick a random element as pivot.
- Pick median as pivot.
- Worst case : O(n<sup>2</sup>)

```
T(n) = T(n-1) + \theta(n)
```

### Best Case

```
 T(n) = 2T(n/2) + \theta(n)
```

Time complexity : 0(nLogn).

### Average Case

```
 T(n) = T(n/9) + T(9n/10) + 0(n)
```
