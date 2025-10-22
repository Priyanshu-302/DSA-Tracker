# 3. Longest Substring Without Repeating Characters - Medium

## Problem Statement
Given a string `s`, find the length of the **longest** `substring` without duplicate characters.

## Example
**Input:** s = "abcabcbb"<br>
**Output:** 3

## Approach - Sliding Window
1. Put the whole `s` in a set so that the duplicate gets removed by itself.
2. Now if `s[r]` does not exists in the set then insert it in the set and calculate the `max_len`.
3. Else erase `s[l]` from the set.
4. Return `max_len`.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
