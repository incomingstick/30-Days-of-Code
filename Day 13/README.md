# Day 13: Abstract Classes
## Objective 
Today, we're taking what we learned yesterday about [_Inheritance_](https://docs.oracle.com/javase/tutorial/java/IandI/subclasses.html) and extending it to [_Abstract Classes_](https://docs.oracle.com/javase/tutorial/java/IandI/abstract.html). Because this is a very specific Object-Oriented concept, submissions are limited to the few languages that use this construct. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-abstract-classes/tutorial) tab for learning materials and an instructional video!

## Task 
Given a _Book_ class and a _Solution_ class, write a _MyBook_ class that does the following:
- Inherits from _Book_
- Has a parameterized constructor taking these **3** parameters:
    1. string **_title_**
    2. string **_author_**
    3. int **_price_**
- Implements the Book class' abstract _display()_ method so it prints these **3** lines:
    1. **Title:**, a space, and then the current instance's **_title_**.
    2. **Author:**, a space, and then the current instance's **_author_**.
    3. **Price:**, a space, and then the current instance's **_price_**.  

**Note:** Because these classes are being written in the same file, you must not use an access modifier (e.g.: **public**) when declaring _MyBook_ or your code will not execute.

## Input Format

You are not responsible for reading any input from stdin. The _Solution_ class creates a _Book_ object and calls the _MyBook_ class constructor (passing it the necessary arguments). It then calls the _display_ method on the _Book_ object.

## Output Format

The **_void display()_** method should print and label the respective **_title_**, **_author_**, and **_price_** of the _MyBook_ object's instance (with each value on its own line) like so:
```
Title: $title
Author: $author
Price: $price
```
**Note:** The **$** is prepended to variable names to indicate they are placeholders for variables.

## Sample Input

The following input from stdin is handled by the locked stub code in your editor:
```
The Alchemist
Paulo Coelho
248
```
## Sample Output

The following output is printed by your _display()_ method:
```
Title: The Alchemist
Author: Paulo Coelho
Price: 248
```