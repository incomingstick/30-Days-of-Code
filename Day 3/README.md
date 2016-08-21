# Day 3: Intro to Conditional Statements
## Objective 
In this challenge, we're getting started with conditional statements. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-conditional-statements/tutorial) tab for learning materials and an instructional video!

## Task 
Given an integer, _n_, perform the following conditional actions:

- If _n_ is odd, print `Weird`
- If _n_ is even and in the inclusive range of **_2_** to **_5_**, print `Not Weird`
- If _n_ is even and in the inclusive range of **_6_** to **_20_**, print `Weird`
- If _n_ is even and greater than **_20_**, print `Not Weird`

Complete the stub code provided in your editor to print whether or not  is weird.

## Input Format

A single line containing a positive integer, _n_.

## Constraints
- **1 <= _n_ <= 100**
## Output Format

Print `Weird` if the number is weird; otherwise, print `Not Weird`.

Sample Input 0

```
3
```

Sample Output 0

```
Weird
```

Sample Input 1

```
24
```

Sample Output 1

```
Not Weird
```
## Explanation

Sample Case 0: **_n_ = 3**  
_n_ is odd and odd numbers are weird, so we print `Weird`.

Sample Case 1: **_n_ = 24**  
**_n_ > 20** and _n_ is even, so it isn't weird. Thus, we print `Not Weird`.
