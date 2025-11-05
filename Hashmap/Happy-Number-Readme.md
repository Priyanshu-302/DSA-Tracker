# 202. Happy Number - Easy

## Problem Statements
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

- Starting with any positive integer, replace the number by the sum of the squares of its digits.
- Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
- Those numbers for which this process ends in 1 are happy.<br>

Return true if n is a happy number, and false if not.

## Example
Input: n = 19<br>
Output: true<br>
Explanation:<br>
12 + 92 = 82<br>
82 + 22 = 68<br>
62 + 82 = 100<br>
12 + 02 + 02 = 1

## Approach
1. If the number is already present in the map then return `false`.
2. Else, extract each single number, square it and sum it until it becomes 1 or the same number itself.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(N)`
