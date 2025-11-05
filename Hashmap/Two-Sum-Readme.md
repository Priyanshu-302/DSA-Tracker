# 1. Two Sum - Easy

## Problem Statement
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Example
Input: nums = [2,7,11,15], target = 9<br>
Output: [0,1]<br>
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

## Approach
1. We have to check whether two numbers equals target or not.
2. So we will take the `first` value as `nums[i]` and `second` value as `target - first`.
3. If `second` exists in the `unordered_map`, then store the index `i` and value of map i.e. `m[second]`.
4. Otherwise, store `m[first] = i`.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(N)`
