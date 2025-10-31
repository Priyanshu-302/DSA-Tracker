# 242. Valid Anagram - Easy

## Problem Statement
Given two strings `s` and `t`, return `true` if `t` is an `anagram` of `s`, and `false` otherwise.

## Example
Input: s = "anagram", t = "nagaram"<br>

Output: true

## Approach
1. The main goal is to make the mapped values non-zero and equal.
2. We will simultaeneously increment the frequency of current element in `s` and decerement the frequency of current element in `t`.
3. If the frequency of the element of `t` becomes 0, then return false.
4. Else return true.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(N)`
