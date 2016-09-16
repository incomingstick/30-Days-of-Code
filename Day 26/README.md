## Objective
Today's challenge puts your understanding of nested conditional statements to the test. You already have the knowledge to complete this challenge, but check out the [Tutorial](https://www.hackerrank.com/challenges/30-nested-logic/tutorial) tab for a video on testing!

## Task
Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:

1. If the book is returned on or before the expected return date, no fine will be charged (i.e.: **_fine_ = 0**).
2. If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, **_fine_ = 15 Hackos X (The number of days late)**.
3. If the book is returned after the expected return month but still within the same calendar year as the expected return date, the **_fine_ = 500 Hackos X (The number of days late)**.
4. If the book is returned after the calendar year in which it was expected, there is a fixed fine of **10000 Hackos**.

## Input Format

The first line contains **3** space-separated integers denoting the respective **_day_**, **_month_**, and **_year_** on which the book was _actually_ returned.
The second line contains space-separated integers denoting the respective **_day_**, **_month_**, and **_year_** on which the book was _expected_ to be returned (due date).

## Constraints
- **1 <= _D_ <= 31**
- **1 <= _M_ <= 12**
- **1 <= _Y_ <= 3000**
- **It is guaranteed that the dates will be valid Gregorian calendar dates**
## Output Format

Print a single integer denoting the library fine for the book received as input.

## Sample Input
```
9 6 2015
6 6 2015
```
## Sample Output
```
45
```
## Explanation

Given the following return dates:  
Actual: **_D_a_ = 9, _M_a_ = 6, _Y_a_ = 2015**  
Expected: **_D_e_ = 6, _M_e_ = 6, _Y_e_ = 2015**

Because **_Y_e == Y_a_**, we know it is less than a year late.  
Because **_M_e == M_a_**, we know it's less than a month late.  
Because **_D_e < D_a_**, we know that it was returned late (but still within the same month and year).

Per the library's fee structure, we know that our fine will be **15 Hackos X (# of days late)**. We then print the result of **15 X (_D_a - D_e_) = 15 X (9 - 6) = 45** as our output.