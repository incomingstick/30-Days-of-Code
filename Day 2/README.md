# Day 2: Operators
## Objective 
In this challenge, you'll work with arithmetic operators. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-operators/tutorial) tab for learning materials and an instructional video!

## Task 
Given the _meal price_ (base cost of a meal), _tip percent_ (the percentage of the meal price being added as tip), and _tax percent_ (the percentage of the meal price being added as tax) for a meal, find and print the meal's _total cost_.

**Note:** Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result!

## Input Format

There are **3** lines of numeric input:  
The first line has a double, **_mealCost_** (the cost of the meal before tax and tip).  
The second line has an integer, **_tipPercent_** (the percentage of **_mealCost_** being added as tip).  
The third line has an integer, **_taxPercent_** (the percentage of **_mealCost_** being added as tax).

## Output Format

Print `The total meal cost is totalCost dollars.`, where **_totalCost_** is the rounded integer result of the entire bill (**_mealCost_** with added tax and tip).

## Sample Input
```
12.00
20
8
```
## Sample Output
```
The total meal cost is 15 dollars.
```
## Explanation

Given:  
**_mealCost_ = 12**, **_tipPercent_ = 20**, **_taxPercent_ = 8**

Calculations:  
 **_tip_ = 12 x (20 / 100) = 2.4**  
 **_tax_ = 12 x (8 / 100) = 0.96**  
 **_totalCost_ = _mealCost_ + _tip_ + _tax_ = 12 + 2.4 + 0.96 = 15.36**  
 **_round_(_totalCost_) = 15**

We round **_totalCost_** to the nearest dollar (integer) and then print our result:
```
The total meal cost is 15 dollars.
```