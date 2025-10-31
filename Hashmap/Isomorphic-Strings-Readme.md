# 205. Isomorphic Strings - Easy

## Problem Statement
Given two strings `s` and `t`, determine if they are isomorphic.

Two strings `s` and `t` are isomorphic if the characters in `s` can be replaced to get `t`.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

## Example
Input: s = "egg", t = "add"<br>

Output: true

## Approach
1. We have to take two `unordered_map` and map each character of two strings.
2. If all maps uniquely then return true.
3. Else, return false.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(N)`
