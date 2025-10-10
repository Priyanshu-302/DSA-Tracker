# 45. Jump Game II - Medium

## Problem Statement
You are given a **0-indexed** array of integers `nums` of length `n`. You are initially positioned at index 0.

Each element `nums[i]` represents the maximum length of a forward jump from index `i`. In other words, if you are at index `i`, you can jump to any index `(i + j)` where:

- `0 <= j <= nums[i]` and
- `i + j < n`<br>

Return *the minimum number of jumps to reach index* `n - 1`. The test cases are generated such that you can reach index `n - 1`.

## Example
**Input:** nums = [2,3,1,1,4]<br>
**Output:** 2<br>
**Explanation:** The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.

## Approach - Greedy
1. Initialize three variables `maxReach = 0`, `newReach = 0` and `jump = 0`
2. Loop over the whole array from index `0 to n - 1`
3. Calculate the `maxReach` between the `maxReach` and `i + nums[i]`
4. If the current index `i` is equal to the `newReach`, then increment `jump` and set the `newReach` to the value of `maxReach`.
5. Return `jump`

## Time and Space Complexities
**TC** - `O(N)` -- for searching `n` elements.<br>
**SC** - `O(1)` -- no extra space or memory used.
