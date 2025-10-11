# 238. Product of Array Except Self - Medium

## Problem Statement
Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of nums except `nums[i]`.

The product of any prefix or suffix of `nums` is **guaranteed** to fit in a **32-bit** integer.

You must write an algorithm that runs in `O(n)` time and without using the division operation.

## Example
**Input:** nums = [1,2,3,4]<br>
**Output:** [24,12,8,6]

## Approach
1. We will do it in two pass one from left to right i.e. `prefix` and another is from right to left i.e. `suffix`.
2. Initialize `answer` array and `prefix = 1` and `suffix = 1`
3. Simultaneously we calculate `prefix *= nums[i - 1]` and `suffix *= nums[i + 1]`
4. At each pass we update the  `answer` i.e. `answer[i] *= prefix` and `answer[i] *= suffix`
5. Return `answer`

## Time and Space Complexity
**TC** - `O(N)`
**SC** - `O(1)`
