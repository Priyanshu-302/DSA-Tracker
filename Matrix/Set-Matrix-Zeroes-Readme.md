# 73. Set Matrix Zeroes - Medium

## Problem Statement
Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0's`.

You must do it `in place.`

## Example
**Input:** matrix = [[1,1,1],[1,0,1],[1,1,1]]<br>
**Output:** [[1,0,1],[0,0,0],[1,0,1]]

## Approach
1. The easiest approach will mark the cells with value `0` in it.
2. To do it take two vectors rows and cols.
3. If a cell with the value `0` appears, mark the corresponding row and column as true, rest will be false.
4. Then if row or column of current index is true set `matrix[i][j] = 0`.

## Time and Space Complexities
**TC** - `O(N^2)`<br>
**SC** - `O(N)`
