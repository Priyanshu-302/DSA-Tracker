# 289. Game of Life - Medium

## Problem Statement
- Board: m × n grid of cells (1 = live, 0 = dead).

- Rules: Each cell looks at its 8 neighbors:

  1. Live cell with <2 live neighbors → dies (under-population)
  
  2. Live cell with 2–3 live neighbors → lives
  
  3. Live cell with >3 live neighbors → dies (over-population)
  
  4. Dead cell with exactly 3 live neighbors → becomes live (reproduction)

- Task: Update the board to the next state simultaneously for all cells.

- Output: Modify the board in-place; no return needed.

## Approach
**Note** - If the element is 1 then the first 3 rules will be applicable and if the element is 0 then only the 4th rule will be applicable.<br>
1. We simply have to traverse the whole matrix.
2. For that at each index we have to visit it's all possible 8 neighbours.
3. For visiting neighbours we will maintain two array `dx` and `dy` for storing directions in x and y axix.
4. While visiting we will calulate the live neighbours for the current element.
5. After visiting all neighbours we will apply the rules.

## Time and Space Complexities
**TC** - `O(M * N)`<br>
**SC** - `O(M * N)`
