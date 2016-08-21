# Day 6: Let's Review
## Objective 
Today we're expanding our knowledge of Strings and combining it with what we've already learned about loops. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-review-loop/tutorial) tab for learning materials and an instructional video!

## Task 
Given a string, **_S_**, of length **_N_** that is indexed from **0** to **_N_ - 1**, print its _even-indexed_ and _odd-indexed_ characters as **2** space-separated strings on a single line (see the _Sample_ below for more detail).

**Note:** **0** is considered to be an even index.

## Input Format

The first line contains an integer, **_T_** (the number of test cases).  
Each line _i_ of the **_T_** subsequent lines contain a String, **_S_**.

## Constraints
- **1 <= _T_ <= 10**
- **2 <= length of _S_ <= 10000**
## Output Format

For each String **_S_j_** (where **0 <= _j_ <= _T_ - 1** ), print **_S_j_**'s _even-indexed_ characters, followed by a space, followed by **_S_j_**'s _odd-indexed_ characters.

## Sample Input
```
2
Hacker
Rank
```
## Sample Output
```
Hce akr
Rn ak
```
## Explanation

_Test Case 0:_ **_S_ = "Hacker"**  
**_S_[0] = "H"**  
**_S_[1] = "a"**  
**_S_[2] = "c"**  
**_S_[3] = "k"**  
**_S_[4] = "e"**  
**_S_[5] = "r"**  
The _even_ indices are **0**, **2**, and **4**, and the _odd_ indices are **1**, **3**, and **5**. We then print a _single line_ of **2** space-separated strings; the first string contains the ordered characters from **_S_**'s _even_ indices (**Hce**), and the second string contains the ordered characters from **_S_**'s _odd_ indices (**akr**).

_Test Case 1:_  **_S_ = "Rank"**  
**_S_[0] = "R"**  
**_S_[1] = "a"**  
**_S_[2] = "n"**  
**_S_[3] = "k"**  
The _even_ indices are **0** and **2**, and the _odd_ indices are **1** and **3**. We then print a _single line_ of **2** space-separated strings; the first string contains the ordered characters from **_S_**'s _even_ indices (**Rn**), and the second string contains the ordered characters from **_S_**'s _odd_ indices (**ak**).
