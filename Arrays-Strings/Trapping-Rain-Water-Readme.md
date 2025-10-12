# 42. Trapping Rain Water - Hard

## Problem Statement
Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

## Example
**Input:** height = [0,1,0,2,1,0,1,3,2,1,2,1]<br>
**Output:** 6<br>
**Explanation:** The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

## Approach - Two Pointer
1. Water is trapped only if there are taller bars on both sides.
2. For each bar `i`: `water[i] = min(max_left[i], max_right[i]) - height[i]`.
3. Compute `left_max[i]` = tallest bar from start to `i`.
4. Compute `right_max[i]` = tallest bar from `i` to end.
5. Sum all `water[i]` for total trapped water.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
