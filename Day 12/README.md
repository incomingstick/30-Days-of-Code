# Day 12: Inheritance
## Objective 
Today, we're delving into Inheritance. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-inheritance/tutorial) tab for learning materials and an instructional video!

## Task 
You are given two classes, _Person_ and _Student_, where _Person_ is the base class and _Student_ is the derived class. Completed code for _Person_ and a declaration for _Student_ are provided for you in the editor. Observe that _Student_ inherits all the properties of _Person_.

Complete the _Student_ class by writing the following:

- A Student class construc tor, which has **4** parameters:
    1. A string, **_firstName_**.
    2. A string, **_lastName_**.
    3. An integer, **_id_**.
    4. An integer array (or vector) of test scores, **_scores_**.

- A _char calculate()_ method that calculates a Student object's average and returns the grade character representative of their calculated average:  
![Grading Scale](https://s3.amazonaws.com/hr-challenge-images/17165/1458142706-3073bc9143-Grading.png)

## Input Format

The locked stub code in your editor calls your _Student_ class constructor and passes it the necessary arguments. It also calls the _calculate_ method (which takes no arguments).

_You are not responsible for reading the following input from stdin:_  
The first line contains **_firstName_**, **_lastName_**, and **_id_**, respectively. The second line contains the number of test scores. The third line of space-separated integers describes **_scores_**.

## Constraints
- **4 <= |_firstName_|,|_lastName_| <= 10**
- **|_id_| = 7**
- **0 <= _score_, _average_ <= 100**
## Output Format

_This is handled by the locked stub code in your editor._ Your output will be correct if your _Student_ class constructor and _calculate()_ method are properly implemented.

## Sample Input
```
Heraldo Memelli 8135627
2
100 80
```

## Sample Output
```
 Name: Memelli, Heraldo
 ID: 8135627
 Grade: O
```

## Explanation

This student had **2** scores to average: **100** and **80**. The student's average grade is **(100 + 80) / 2 = 90**. An average grade of **90** corresponds to the letter grade **O**, so our _calculate()_ method should return the character `'O'`.