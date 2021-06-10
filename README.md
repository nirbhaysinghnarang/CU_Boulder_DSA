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
