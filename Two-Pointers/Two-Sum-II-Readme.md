# 167. Two Sum II - Input Array Is Sorted - Medium

## Problem Statement
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.

## Example
**Input:** numbers = [2,7,11,15], target = 9<br>
**Output:** [1,2]<br>
**Explanation:** The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

## Aprroach - Two Pointer
1. Take two variables `i = 0` nad `j = n - 1`.
2. Take the sum i.e. `int sum = numbers[i] + numbers[j]`.
3. If `sum > target`, decrement j.
4. If `sum < target`, increment i.
5. Else return `{i + 1, j + 1}`.

## Time and Space Complexity
**TC** - `O(N)`<br>
**SC** - `O(1)`
