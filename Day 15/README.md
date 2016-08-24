# Day 15: Linked List
## Objective
Today we're working with _Linked Lists_. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-linked-list/tutorial) tab for learning materials and an instructional video!
****
A _Node_ class is provided for you in the editor. A _Node_ object has an integer data field, **_data_**, and a _Node_ instance pointer, **_next_**, pointing to another node (i.e.: the next node in a list).

A _Node insert_ function is also declared in your editor. It has two parameters: a pointer, **_head_**, pointing to the first node of a linked list, and an integer **_data_** value that must be added to the end of the list as a new _Node_ object.

## Task
Complete the _insert_ function in your editor so that it creates a new _Node_ (pass **_data_** as the _Node_ constructor argument) and inserts it at the tail of the linked list referenced by the **_head_** parameter. Once the new node is added, return the reference to the **_head_** node.

**Note:** If the argument passed to the insert function is null, then the initial list is empty.

## Input Format

The _insert_ function has **2** parameters: a pointer to a _Node_ named **_head_**, and an integer value, **_data_**.  
The constructor for _Node_ has **1** parameter: an integer value for the **_datat_** field.

You _do not_ need to read anything from stdin.

## Output Format

Your _insert_ function should return a reference to the **_head_** node of the linked list.

## Sample Input

The following input is handled for you by the locked code in the editor:  
The first line contains _T_, the number of test cases.  
The **_T_** subsequent lines of test cases each contain an integer to be inserted at the list's tail.
```
4
2
3
4
1
```
## Sample Output

The locked code in your editor prints the ordered data values for each element in your list as a single line of space-separated integers:
```
2 3 4 1 
```
## Explanation

**_T_ = 4**, so the locked code in the editor will be inserting nodes.  
The list is initially empty, so **_head_** is null; accounting for this, our code returns a new node containing the data value **2** as the **_head_** of our list. We then create and insert nodes **3**, **4**, and **1** at the tail of our list. The resulting list returned by the last call to **_inserts_** is **[2, 3, 4, 1]**, so the printed output is `2 3 4 1`.  
![LinkedListExplanation.png](https://s3.amazonaws.com/hr-challenge-images/17168/1456961238-28488bfa0d-LinkedListExplanation.png)