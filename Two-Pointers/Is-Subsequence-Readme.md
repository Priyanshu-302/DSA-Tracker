# 392. Is Subsequence - Easy

## Problem Statement
Given two strings `s` and `t`, return `true` if `s` is a subsequence of `t`, or `false` otherwise.

A **subsequence** of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., `"ace"` is a subsequence of `"abcde"` while `"aec"` is not).

## Example
**Input:** s = "abc", t = "ahbgdc"<br>
**Output:** true

## Approach
1. Take two variables `i = 0` and `j = 0` for traversing two strings.
2. Take a `count = 0` variable and return `true` if `count == s.size()`
3. If `s[i] == t[j]` then increment both `i`, `j` and `count`.
4. Else increment only `j`.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
