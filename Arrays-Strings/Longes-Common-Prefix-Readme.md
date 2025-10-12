# 14. Longest Common Prefix - Easy

## Problem Statement
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

## Example
**Input:** strs = ["flower","flow","flight"]<br>
**Output:** "fl"

## Approach
1. Initialize a `prefix` variable with the first index element stored in it.
2. Now create an extra function which sees return the common part between two string.
3. Returned string is then stored on `prefix`
4. We return `prefix`

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
