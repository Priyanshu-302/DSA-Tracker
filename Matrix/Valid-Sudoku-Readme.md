# 36. Valid Sudoku - Medium

## Problem Statement
Determine if a `9 x 9` Sudoku board is valid. Only the filled cells need to be validated **according to the following rules:**

1. Each row must contain the digits `1-9` without repetition.
2. Each column must contain the digits `1-9` without repetition.
3. Each of the nine `3 x 3` sub-boxes of the grid must contain the digits `1-9` without repetition.<br>

Note:

- A Sudoku board (partially filled) could be valid but is not necessarily solvable.
- Only the filled cells need to be validated according to the mentioned rules.

## Example
**Input:** board = <br>
[["5","3",".",".","7",".",".",".","."]<br>
,["6",".",".","1","9","5",".",".","."]<br>
,[".","9","8",".",".",".",".","6","."]<br>
,["8",".",".",".","6",".",".",".","3"]<br>
,["4",".",".","8",".","3",".",".","1"]<br>
,["7",".",".",".","2",".",".",".","6"]<br>
,[".","6",".",".",".",".","2","8","."]<br>
,[".",".",".","4","1","9",".",".","5"]<br>
,[".",".",".",".","8",".",".","7","9"]]<br>
**Output:** true

## Approach
1. We have to understand that, we do not need to fill the empty spaces, we only have to check if the matrix with pre filled values is valid or not.
2. A sudoku is only valid if it contains numbers `1-9` appearing only one time in a row, a column and a `3 x 3` sub-grid.
3. So for ease we will take three vector of sets.
4. If an empty space comes we will simply skip that part.
5. If the current number occuring for first time we will insert in the corresponding set otherwise we will return false.
6. **Note -** The formula to calculate the `3 x 3` sub-grid is `(i / 3) * 3 + (j / 3)`.

## Time and Space Complexities
**TC** - `O(N^2)`<br>
**SC** - `O(N)`
