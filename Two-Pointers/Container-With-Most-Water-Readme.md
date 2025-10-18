# 11. Container With Most Water - Medium

## Problem Statement
You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `ith` line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return *the maximum amount of water a container can store.*

**Notice** that you may not slant the container.

## Example
**Input:** height = [1,8,6,2,5,4,8,3,7]<br>
**Output:** 49<br>
**Explanation:** The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

## Approach - Two Pointer
1. Set a `max_water` variable to 0 and take two variables `i` and `j` which will go from start to end.
2. So basically `max_water` means the area and if we look closely the two bars are storing water making a shape of a rectangle.
3. So we will calculate the area. So the max area the max will be water.
4. So the `area = length * breadth`.
5. `Length = min(height[i], height[j])`.
6. `Breadth = j - i`.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
