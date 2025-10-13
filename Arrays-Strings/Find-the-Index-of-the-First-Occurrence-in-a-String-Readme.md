# 28. Find the Index of the First Occurrence in a String - Easy

## Problem Statement
Given two strings `needle` and `haystack`, return the index of the first occurrence of `needle` in `haystack`, or `-1` if `needle` is not part of `haystack`.

## Example
**Input:** haystack = "sadbutsad", needle = "sad"<br>
**Output:** 0<br>
**Explanation:** "sad" occurs at index 0 and 6.<br>
The first occurrence is at index 0, so we return 0.

## Approach
1. We first store the first occurence of the given sub string `needle` using the `.find()` method.
2. Now we compare if the `pos != string::npos` then return `pos`
3. Else, return `-1`

## Time and Space Complexity
**TC** - `O(1)`<br>
**SC** - `O(1)`
