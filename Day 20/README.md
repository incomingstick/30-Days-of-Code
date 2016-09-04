# Day 20: Sorting
## Objective 
Today, we're discussing a simple sorting algorithm called _Bubble Sort_. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-sorting/tutorial) tab for learning materials and an instructional video!
****
Consider the following version of Bubble Sort:
```C++
for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
    int numberOfSwaps = 0;
    
    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }
    
    // If no elements were swapped during a traversal, array is sorted
    if (numberOfSwaps == 0) {
        break;
    }
}
```
## Task 
Given an array, **_a_**, of size **_n_** containing distinct elements **_a[0], a[1], ..., a[n]_**, sort array **_a_** in ascending order using the _Bubble Sort_ algorithm above. Once sorted, print the following lines:

1. **Array is Sorted in _numSwaps_ swaps**  
Where _numSwaps_ is the number of swaps that took place.
 
2. **First Element: _firstElement_**  
Where _firstElement_ is the first element in the sorted array.
 
3. **Last Element: _lastElement_**  
Where _lastElement_ is the last element in the sorted array.

**Hint:** To complete this challenge, you will need to add a variable that keeps a running tally of _all_ swaps that occur during execution.

## Input Format

The first line contains an integer, **_n_**, denoting the number of elements in array **_a_**.  
The second line contains **_n_** space-separated integers describing **_a_**, where the **_ith_** integer is **_a[i]_**, where **0 <= _i_ <= _n_ - 1**.

## Constraints
- **2 <= _n_ <= 600**
- **1 <= _a[i]_ <= 2 x 10^6**, where **0 <= _i_ <= _n_ - 1**
## Output Format

There should be **3** lines of output:

1. **Array is Sorted in _numSwaps_ swaps**  
Where _numSwaps_ is the number of swaps that took place.
 
2. **First Element: _firstElement_**  
Where _firstElement_ is the first element in the sorted array.
 
3. **Last Element: _lastElement_**  
Where _lastElement_ is the last element in the sorted array.

## Sample Input 0
```
3
1 2 3
```
## Sample Output 0
```
Array is sorted in 0 swaps.
First Element: 1
Last Element: 3
```
## Sample Input 1
```
3
3 2 1
```
## Sample Output 1
```
Array is sorted in 3 swaps.
First Element: 1
Last Element: 3
```
## Explanation

_Sample Case 1:_   
The array is already sorted, so **0** swaps take place and we print the necessary **3** lines of output shown above.

_Sample Case 2:_  
The array is not sorted, and its initial values are: **{3, 2, 1}**. The following **3** swaps take place:  
1. **{3, 2, 1}** -> **{2, 3, 1}**
2. **{2, 3, 1}** -> **{2, 1, 3}**
3. **{2, 1, 3}** -> **{1, 2, 3}**

At this point the array is sorted and we print the necessary **3** lines of output shown above.