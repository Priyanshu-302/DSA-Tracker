# 55. Jump Game - Medium

## Problem Statement
You are given an integer array `nums`. You are initially positioned at the array's **first index**, and each element in the array represents your maximum jump length at that position.

Return `true` *if you can reach the last index,* *or `false` otherwise*.

## Example
**Input:** nums = [2,3,1,1,4]<br>
**Output:** true<br>
**Explanation:** Jump 1 step from index 0 to 1, then 3 steps to the last index.

## Approach - Greedy
1. It is not mandatory to jump upto a maximum distance given. The main goal should be optimizing the jump.
2. Initialize a variable `maxJump = 0`
3. Now loop over from index `0 to n - 1`
4. Calculate the `maxJump` between  `maxJump` and `i + nums[i]`
5. If the `maxJump` is greater or equals than `n - 1` then return `true`
6. Otherwise, return `false`

## Time and Space Complexity
**TC** - `O(N)` -- for searching `n` elements.<br>
**SC** - `O(1)` -- no extra space or memory used.
