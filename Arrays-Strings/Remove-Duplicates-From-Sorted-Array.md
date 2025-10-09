# 26. Remove Duplicates from Sorted Array - Easy

## Problem Statement
Given an integer array `nums` sorted in non-decreasing order, remove the duplicates `in-place` such that each unique element appears only **once**. The **relative order** of the elements should be kept the **same**. Then return the number of unique elements in `nums`.

## Example
Input: nums = [1,1,2]<br>
Output: 2, nums = [1,2,_]<br>
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k.

## Approach
1. Initialize a variable `idx = 0`
2. Since we are going to start the loop from `1`, so update the `first` or `0th` index i.e. `nums[idx++] = nums[0]`
3. Start the loop from `1 to n - 1`
4. By reading the problem the first thing comes in mind that to look to the next index i.e. `i + 1` but if we see index `i + 1` brings an out of bound error. So to deal with this we will look on index `i - 1` since it will never give an out of bound error because it is always behind the `ith` index. On the verge of out of bound `i` will be greater than `n` and the loop will eventually end.
5. Since problem asks of array with no duplicate numbers. So if we encounter any duplicate we will simply  `continue` the iteration i.e. `if (nums[i] == nums[i - 1] continue;`
6. At last we will update the current `idx` i.e. `nums[idx++] = nums[i]`

## Time and Space Complexity
TC - `O(N)` -- for searching upto `n` elements.<br>
SC - `O(1)` -- no extra spaces or memory needed
