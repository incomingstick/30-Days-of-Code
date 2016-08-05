# Day 8: Dictionaries and Maps
## Objective 
Today, we're learning about Key-Value pair mappings using a Map or Dictionary data structure. Check out the [Tutorial](https://www.hackerrank.com/challenges/30-dictionaries-and-maps/tutorial) tab for learning materials and an instructional video!

## Task 
Given **_N_** names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an unknown number of names to query your phone book for; for each **_name_** queried, print the associated entry from your phone book (in the form **name=phoneNumber**) or **Not Found** if there is no entry for .


**Note:** Your phone book should be a Dictionary/Map/HashMap data structure.

## Input Format

The first line contains an integer, **_N_**, denoting the number of entries in the phone book. 
Each of the **_N_** subsequent lines describes an entry in the form of **2** space-separated values on a single line. The first value is a friend's **_name_**, and the second value is an **8**-digit **_phone number_**.

After the **N** lines of phone book entries, there are an unknown number of lines of queries. Each line (query) contains a **_name_** to look up, and you must continue reading lines until there is no more input.

**Note:** Names consist of lowercase English letters and are _first names_ only.

## Constraints
- **1 <= _N_ <= 10^5**
- **1 <= _queries_ <= 10^5**
## Output Format

On a new line for each query, print **Not found** if the name has no corresponding entry in the phone book; otherwise, print the full **_name_** and **_phone number_** in the format **name=phoneNumber**.

## Sample Input
```
3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry
```
## Sample Output
```
sam=99912222
Not found
harry=12299933
```
## Explanation
**_N_ = 3**

We add the **_B_** subsequent (_Key_,_Value_) pairs to our map so it looks like this:  

**_phoneBook_ = {(_sam_, 99912222),(_tom_, 11122222),(_harry_, 12299933)}**

We then process each query and print **Key=Value** if the queried Key is found in the map, or **Not found** otherwise.

_Query 0:_ **sam**  
Sam is one of the keys in our dictionary, so we print **sam=99912222**.

_Query 1:_ **edward**  
Edward is not one of the keys in our dictionary, so we print **Not found**.

_Query 2:_ **harry**  
Harry is one of the keys in our dictionary, so we print **harry=12299933**.