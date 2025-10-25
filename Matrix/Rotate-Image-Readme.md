# 48. Rotate Image - Medium

## Problem Statement
You are given an `n x n` 2D `matrix` representing an image, rotate the image by `90` degrees (clockwise).

You have to rotate the image `in-place`, which means you have to modify the input 2D matrix directly. **DO NOT** allocate another 2D matrix and do the rotation.

## Example
**Input:** matrix = [[1,2,3],[4,5,6],[7,8,9]]<br>
**Output:** [[7,4,1],[8,5,2],[9,6,3]]

## Approach
1. It is a very easy problem
2. Firstly transpose the matrix.
3. Reverse the transposed matrix on the behalf of each row.

## Time and Space Complexities
**TC** - `O(N^2)`<br>
**SC** - `O(1)`
