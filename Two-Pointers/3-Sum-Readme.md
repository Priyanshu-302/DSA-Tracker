# 15. 3Sum - Medium

## Problem Statement
Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

## Example
**Input:** nums = [-1,0,1,2,-1,-4]<br>
**Output:** [[-1,-1,2],[-1,0,1]]

## Approach - Optimized Two Pointer
1. Sort the array it will be easy to find the duplicates.
2. Set one variable `i = 0`.
3. Then apply two pointer from `j = i + 1 to k = n - 1`.
4. Calculate the sum i.e. `sum = nums[i] + nums[j] + nums[k]`.
5. If `sum > 0`, decrement `k`.
6. If `sum < 0`, increment `j`.
7. Else push `nums[i], nums[j], nums[k]` in the 2D vector.
8. Do not forget to avoid the duplicates.

## Time and Space Complexities
**TC** - `O(N^2)`<br>
**SC** - `O(1)`
