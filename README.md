# Intro
This repository serves to host all my Python3 & C++ implementations of the algorithms and data structures covered in <a href="https://www.coursera.org/specializations/boulder-data-structures-algorithms"> CU Boulder's Coursera DS&A Specialization </a> in addition to other self-studied algorithms and data structures.

In order to solidfy my own understanding of the content, I will periodically keep on updating the README with my notes on the data structure/algorithm covered most recently.

## Insertion Sort
Best-case Time Complexity: *O(n)*
Worst-case Time Complexity: *O(n^2)*
### Algorithmic Procedure
Divide input array into a sorted and unsorted sub-array.
Add one element to the sorted array by running an `insert` subprocedure.
`insert` subprodecure iterates from the element preceding the element to be added to the first element, swapping in the desired order.



## Quick Sort
Best-case Time Complexity: *O(n log n)*
Worst-case Time Complexity: *O(n^2)*
### Algorithmic Procedure
Recursively select a *pivot* element. Sort the input array such that all elements preceding the pivot are less than it and vice versa. Loop until sort is complete.



## Binary Search
Best-case Time Complexity: *O(1)*
Worst-case Time Complexity: *O(log n)*
### Algorithmic Procedure
Divide the array into smaller sub-arrays using left and right pointers. Compare to the middle of each subarray until subarray is atomic. Repeat while element not found or left pointer less than right pointer.



## Merge Sort
Best-case Time Complexity: *O(1)*
Worst-case Time Complexity: *O(n log n)*
### Algorithmic Procedure
Divide the array into smaller sub-arrays using left and right pointers. Compare to the middle of each subarray until subarray is atomic. Repeat while element not found or left pointer less than right pointer.

### Two-way merge
Sort two sorted input arrays into a single sorted array.

## Dynamic Array (C++)
Data structure that reallocates memory dynamically, supports primitive functions.

## Stack (C++)
Reference - CLRS Chapter 10.
