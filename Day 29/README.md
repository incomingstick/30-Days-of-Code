# Day 29: Bitwise AND
## Objective
Welcome to the last day! Today, we're discussing bitwise operations. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-bitwise-and/tutorial) tab for learning materials and an instructional video!

## Task
Given set **_S_ = {1, 2, 3, ..., _N_}**. Find two integers, **_A_** and **_B_** (where **_A_** < **_B_**), from set such that the value of **_A&B_** is the maximum possible _and also less than a given integer_, **_K_**. In this case, **&** represents the _bitwise AND_ operator.

## Input Format

The first line contains an integer, **_T_**, the number of test cases.  
Each of the **_T_** subsequent lines defines a test case as **2** space-separated integers, **_N_** and **_K_**, respectively.

## Constraints
- **1 <= _T_ <= 10^3**
- **2 <= _N_ <= 10^3**
- **2 <= _K_ <= _N_**
## Output Format

For each test case, print the maximum possible value of **_A&B_** on a new line.

## Sample Input
```
3
5 2
8 5
2 2
```
## Sample Output
```
1
4
0
```
## Explanation
**_N_ = 5, _K_ = 2, _S_ = {1, 2, 3, 4, 5}**  
All possible values of and are:
1. **_A_ = 1, _B_ = 2; _A&B_ = 0**
2. **_A_ = 1, _B_ = 3; _A&B_ = 1**
3. **_A_ = 1, _B_ = 4; _A&B_ = 0**
4. **_A_ = 1, _B_ = 5; _A&B_ = 1**
5. **_A_ = 2, _B_ = 3; _A&B_ = 2**
6. **_A_ = 2, _B_ = 4; _A&B_ = 0**
7. **_A_ = 2, _B_ = 5; _A&B_ = 0**
8. **_A_ = 3, _B_ = 4; _A&B_ = 0**
9. **_A_ = 3, _B_ = 5; _A&B_ = 1**
10. **_A_ = 4, _B_ = 5; _A&B_ = 4**

The maximum possible value of **_A&B_** that is also < (**_K_ = 2**) is **1**, so we print **1** on a new line.