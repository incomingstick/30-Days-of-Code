# Day 22: Binary Search Trees
## Objective 
Today, we're working with Binary Search Trees (BSTs). Check out the [Tutorial](https://www.hackerrank.com/challenges/30-binary-search-trees/tutorial) tab for learning materials and an instructional video!

## Task 
The height of a binary search tree is the number of edges between the tree's root and its furthest leaf. You are given a pointer, **_root_**, pointing to the root of a binary search tree. Complete the _getHeight_ function provided in your editor so that it returns the height of the binary search tree.

## Input Format

The locked stub code in your editor reads the following inputs and assembles them into a binary search tree:  
The first line contains an integer, **_n_**, denoting the number of nodes in the tree.  
Each of the **_n_** subsequent lines contains an integer, **_data_**, denoting the value of an element that must be added to the BST.

## Output Format

The locked stub code in your editor will print the integer returned by your _getHeight_ function denoting the height of the BST.

## Sample Input
```
7
3
5
2
1
4
6
7
```
## Sample Output
```
3
```
## Explanation

The input forms the following BST:

![BST.png](https://s3.amazonaws.com/hr-challenge-images/17175/1459894869-6bb53ce6eb-BST.png)

The longest root-to-leaf path is shown below:

![BST.png](https://s3.amazonaws.com/hr-challenge-images/17175/1459895368-4955f9ce74-LongestRTL.png)

There are **4** nodes in this path that are connected by **3** edges, meaning our BST's **_height_ = 3**. Thus, we print **3** as our answer.