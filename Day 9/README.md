# Day 9: Recursion
## Objective
Today, we're learning and practicing an algorithmic concept called _Recursion_. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-recursion/tutorial) tab for learning materials and an instructional video!

## Task
Write a _factorial_ function that takes a positive integer, **_N_** as a parameter and prints the result of **_N_!** (**_N_** factorial).

**Note:** If you fail to use recursion or fail to name your recursive function _factorial_ or _Factorial_, you will get a score of **0**.

## Input Format

A single integer, **_N_** (the argument to pass to factorial).

## Constraints
- **2 <= _N_ <= 12**
- Your submission must contain a recursive function named _factorial_.

## Output Format

Print a single integer denoting **_N_!**.

## Sample Input
```
3
```
## Sample Output
```
6
```
## Explanation

Consider the following steps:
1. **_factorial_(3) = 3 x _factorial_(2)**
2. **_factorial_(2) = 2 x _factorial_(1)**
3. **_factorial_(1) = 1**

From steps **2** and **3**, we can say **_factorial_(2) = 2 x 1 = 2**; then when we apply the value from **_factorial_(2)** to step **1**, we get **_factorial_(3) = 3 x 2 x 1 = 6**. Thus, we print **6** as our answer.