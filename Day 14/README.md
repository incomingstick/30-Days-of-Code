# Day 14: Scope
## Objective 
Today we're discussing scope. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-scope/tutorial) tab for learning materials and an instructional video!
****
The _absolute difference_ between two integers, _**a**_ and _**b**_, is written as |_**a - b**_|. The _maximum absolute difference_ between two integers in a set of positive integers, _**elements**_, is the largest absolute difference between any two integers in _**elements**_.

The _Difference_ class is started for you in the editor. It has a private integer array (_**elements**_) for storing _**N**_ non-negative integers, and a public integer (_**maximumDifference**_) for storing the maximum absolute difference.

## Task 
Complete the _Difference_ class by writing the following:

- A class constructor that takes an array of integers as a parameter and saves it to the _**elements**_ instance variable.
- A _computeDifference_ method that finds the maximum absolute difference between any numbers in _**N**_ and stores it in the _**maximumDifference**_ instance variable.

## Input Format

You are not responsible for reading any input from stdin. The locked _Solution_ class in your editor reads in **2** lines of input; the first line contains _**N**_, and the second line describes the _**elements**_ array.

## Constraints
- **1 <= _N_ <= 10**
- **1 <= _elements_[_i_] <= 100, where 0 <= _i_ <= N - 1** 
## Output Format

You are not responsible for printing any output; the _Solution_ class will print the value of the _**maximumDifference**_ instance variable.

## Sample Input
```
3
1 2 5
```
## Sample Output
```
4
```
## Explanation

The scope of the _**elements**_ array and _**maximumDifference**_ integer is the entire class instance. The class constructor saves the argument passed to the constructor as the _**elements**_ instance variable (where the _computeDifference_ method can access it).

To find the maximum difference, _computeDifference_ checks each element in the array and finds the maximum difference between any **2** elements:  
**|1 - 2| = 1**   
**|1 - 5| = 4**  
**|2 - 5| = 3**  
The maximum of these differences is **4**, so it saves the value **4** as the _**maximumDifference**_ instance variable. The locked stub code in the editor then prints the value stored as _**maximumDifference**_, which is **4**.