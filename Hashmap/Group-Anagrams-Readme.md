# 49. Group Anagrams - Medium

## Problem Statements
Given an array of strings strs, group the `anagrams` together. You can return the answer in **any order**.

## Example
Input: strs = ["eat","tea","tan","ate","nat","bat"]<br>

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

## Approach
1. We will use a map which will store the sorted words as key and the original array of words as values.
2. Then we will store it into a 2D array

**Note** - We are sorting each extracted word because anagrams basically means changing the postion of a word. but if we sort it the postions become fixed and then the mapping will be easy.

## Time and Space Complexities
**TC** - `O(Nklogk)`<br>
**SC** - `O(Nk)`
