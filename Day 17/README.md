# Day 17: More Exceptions
## Objective 
Yesterday's challenge taught you to manage exceptional situations by using _try_ and _catch_ blocks. In today's challenge, you're going to practice throwing and propagating an exception. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-more-exceptions/tutorial) tab for learning materials and an instructional video!

## Task 
Write a _Calculator_ class with a single method: _int power(int,int)_. The power method takes two integers, **_n_** and **_p_**, as parameters and returns the integer result of **_n^p_**. If either **_n_** or **_p_** is negative, then the method must throw an exception with the message: `n and p should be non-negative.`

**Note:** Do not use an access modifier (e.g.: public) in the declaration for your _Calculator_ class.

## Input Format

Input from stdin is handled for you by the locked stub code in your editor. The first line contains an integer, **_T_**, the number of test cases. Each of the **_T_** subsequent lines describes a test case in **2** space-separated integers denoting **_n_** and **_p_**, respectively.

## Constraints

- No Test Case will result in overflow for correctly written code.
## Output Format

Output to stdout is handled for you by the locked stub code in your editor. There are **_T_** lines of output, where each line contains the result of **_n^p_** as calculated by your _Calculator_ class' _power_ method.

## Sample Input
```
4
3 5
2 4
-1 -2
-1 3
```
## Sample Output
```
243
16
n and p should be non-negative
n and p should be non-negative
```
## Explanation
**_T_ = 4**  
**_T_0_**: **3** and **5** are positive, so _power_ returns the result of **3^5**, which is **243**.  
**_T_1_**: **2** and **4** are positive, so _power_ returns the result of **2^4**, which is **16**.  
**_T_2_**: Both inputs (**-1** and **-2**) are negative, so _power_ throws an exception and `n and p should be non-negative` is printed.  
**_T_3_**: One of the inputs (**-1**) is negative, so _power_ throws an exception and `n and p should be non-negative` is printed.