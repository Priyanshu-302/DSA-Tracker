# 219. Contains Duplicate II - Easy

## Problem Statement
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

## Example
Input: nums = [1,2,3,1], k = 3<br>
Output: true

## Approach
1. Take an unordered_map.
2. If the number is not present, then store the current index as the value.
3. Else, check of `abs(i - j) <= k`, return true.

## Timea and Space Cmplexities
**TC** - `O(N)`<br>
**SC** - `O(N)`
