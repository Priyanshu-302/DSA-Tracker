# 27. Remove Element - Easy

## Problem Statement
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

## Example
Input: nums = [3,2,2,3], val = 3<br>
Output: 2, nums = [2,2,_,_]<br>
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k.

## Approach
1. Initialize a variable `idx = 0`, it is the new index for the `in-place` change of the array.
2. Traverse the whole loop from `i = 0 to n - 1`
3. If `nums[i] == val` simply `continue`
4. Otherwise, change the array `in-place` -> `nums[idx++] = nums[i]`
5. Return `idx`

## Time and Space Complexity
TC - `O(n)`, because we traverse all `n` elements once.
SC - `O(1)` (constant space)
