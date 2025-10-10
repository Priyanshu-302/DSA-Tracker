# 169. Majority Element - Easy

## Problem Statement
Given an array `nums` of size `n`, return the majority element.

The majority element is the element that appears more than `[n / 2]` times. You may assume that the majority element always exists in the array.

## Example
**Input:** nums = [3,2,3]<br>
**Output:** 3

## Approach 1 - using `sort()` function
1. Sort the given array first using the built in `sort()` function.
2. Then return the `nums[n / 2]th` element.<br>
**Note -** Here the drawback is the solution is taking a time complexity of `O(NlogN)`

## Approach 2 - Optimized solution using **(Boyer Moore's Voting Algorithm)**
1. Initialize `cnt = 0` and `freq = 0`
2. If the `cnt` is 0, then the `freq` will be equal to the current element.
3. Now, if the `freq` is equal to the current element, then increment the count `cnt`
4. Else, decrement the count `cnt`

## Time and Space Complexity
**TC** - `O(N)` -- for searching `n` elements.<br>
**SC** - `O(1)` -- no extra spaces or memory used.
