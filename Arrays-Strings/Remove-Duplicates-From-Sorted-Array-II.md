# 80. Remove Duplicates from Sorted Array II - Medium

## Problem Statement
Given an integer array `nums` sorted in **non-decreasing order**, remove some duplicates `in-place` such that each unique element appears **at most twice**. The **relative** order of the elements should be kept the **same**.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the **first part** of the array `nums`. More formally, if there are `k` elements after removing the duplicates, then the first `k` elements of `nums` should hold the final result. It does not matter what you leave beyond the first `k` elements.

Return `k` after placing the final result in the first `k` slots of `nums`.

Do not allocate extra space for another array. You must do this by **modifying the input array**`in-place` with `O(1)` extra memory.

## Example
Input: nums = [1,1,1,2,2,3]<br>
Output: 5, nums = [1,1,2,2,3,_]<br>
Explanation: Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

## Approach
1. Initialize a variable `idx = 0`
2. Start the loop from `2 to n - 1`
3. By reading the problem the first thing comes in mind that to look to the 2nd next index i.e. `i + 2` but if we see index `i + 2` brings an out of bound error. So to deal with this we will look on index `i - 2` since it will never give an out of bound error because it is always behind the `ith` index. On the verge of out of bound `i` will be greater than `n` and the loop will eventually end.
4. Since problem asks of array with no duplicate numbers. So if we encounter any duplicate we will simply  `continue` the iteration i.e. `if (nums[i] == nums[i - 2] continue;`
5. At last we will update the current `idx` i.e. `nums[idx++] = nums[i]`
6. Return the `idx`

## Time and Space Complexity
TC - `O(N)` -- for searching upto `n` elements.<br>
SC - `O(1)` -- no extra spaces or memory used.
