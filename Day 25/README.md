# Day 25: Running Time and Complexity
## Objective
Today we're learning about running time! Check out the [Tutorial](https://www.hackerrank.com/challenges/30-running-time-and-complexity/tutorial) tab for learning materials and an instructional video!

## Task
A _prime_ is a natural number greater than **1** that has no positive divisors other than and itself. Given a number, **_n_**, determine and print whether it's **Prime** or **Not prime**.

**Note:** If possible, try to come up with a **O(sqrt(_n_))** primality algorithm, or see what sort of optimizations you come up with for an **O(_n_)** algorithm. Be sure to check out the Editorial after submitting your code!

## Input Format

The first line contains an integer, **_T_**, the number of test cases.  
Each of the **_T_** subsequent lines contains an integer, **_n_**, to be tested for primality.

## Constraints
- **1 <= _T_ <= 20**
- **1 <= _n_ <= 2 x  10^9**
## Output Format

For each test case, print whether **_n_** is **Prime** or **Not prime** on a new line.

## Sample Input
```
3
12
5
7
```
## Sample Output
```
Not prime
Prime
Prime
```
## Explanation

Test Case 0: **_n_ = 12**.  
**12** is divisible by numbers other than **1** and itself (i.e.: **2**, **3**, **6**), so we print **Not prime** on a new line.

Test Case 1: **_n_ = 5**.  
**5** is only divisible and itself, so we print **Prime** on a new line.

Test Case 2: **_n_ = 7**.  
**7** is only divisible and itself, so we print **Prime** on a new line.