# 54. Spiral Matrix - Medium

## Problem Statement
Given an `m x n` matrix, return all elements of the `matrix` in spiral order.

## Example
**Input:** matrix = [[1,2,3],[4,5,6],[7,8,9]]<br>
**Output:** [1,2,3,6,9,8,7,4,5]

## Approach
1. In this problem if we look closely we are traversing 4 times i.e. top, right, bottom and left.
2. So like the observation in our code also we will move to four directions.
3. So we take 4 variables `srow = 0, scol = 0, erow = n - 1 and ecol = m - 1`.
4. For top traversal --> we will go from `scol` to `ecol`.
5. For right traversal --> we will go from `srow + 1` to `erow`.
6. For bottom traversal --> we will go from `ecol - 1` to `scol`.
7. For left traversal --> we will go from `erow - 1` to `srow + 1`.
8. But in the bottom and left traversal, if `srow == erow` and `scol == ecol` respectively, we will simply break.
9. It is because if in the bottom if there is only one row remaining and we are moving inward so it is already printed, but if we do not check it it will be again printed and vice-versa.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
