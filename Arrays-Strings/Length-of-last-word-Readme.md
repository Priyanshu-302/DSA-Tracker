# 58. Length of Last Word - Easy

## Problem Statement
Given a string `s` consisting of words and spaces, *return the length of the **last word** in the string.*

A **word** is a maximal `substring` consisting of non-space characters only.

## Example
**Input:** s = "Hello World"<br>
**Output:** 5<br>
**Explanation:** The last word is "World" with length 5.

## Approach
1. Since we need to find the length of the last word we will traverse the loop from backwards.
2. Now if Initially if any space occurs we simply decrement the `i`.
3. Otherwise we increment the `length` and decrement the `i`.
4. Return `length`

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
