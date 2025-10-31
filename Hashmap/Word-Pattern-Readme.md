# 290. Word Pattern - Easy

## Problem Statement
Given a `pattern` and a string `s`, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in `pattern` and a non-empty word in `s`. Specifically:

Each letter in `pattern` maps to exactly one unique word in `s`.
Each unique word in `s` maps to exactly one letter in `pattern`.
No two letters map to the same word, and no two words map to the same letter.

## Example
Input: pattern = "abba", s = "dog cat cat dog"<br>

Output: true

## Approach
1. Extract the words from the string `s` and store it in a string of array or vector.
2. Then We have to take two `unordered_map` and map each character of two strings.
3. If all maps uniquely then return true.
4. Else, return false.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(N)`
