# 209. Minimum Size Subarray Sum - Medium

## Problem Statement
Given an array of positive integers `nums` and a positive integer `target`, return the **minimal length** of a `subarray` whose sum is greater than or equal to `target`. If there is no such subarray, return `0` instead.

## Example
**Input:** target = 7, nums = [2,3,1,2,4,3]<br>
**Output:** 2<br>
**Explanation:** The subarray [4,3] has the minimal length under the problem constraint.

## Approach - Sliding Window
1. Initialize four variables `l = 0`, `r = 0`, `sum = 0` and `min_len = INT_MAX`.
2. Calculate the sum i.e. `sum += nums[r]`.
3. If the `sum >= target`, then calculate the `min_len`.
4. Return the `min_len`.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
