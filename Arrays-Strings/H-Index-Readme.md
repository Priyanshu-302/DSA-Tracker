# 274. H-Index - Medium

## Problem Statement
Given an array of integers `citations` where `citations[i]` is the number of citations a researcher received for their `ith` paper, return *the researcher's h-index.*

According to the `definition of h-index on Wikipedia`: The h-index is defined as the maximum value of `h` such that the given researcher has published at least `h` papers that have each been cited at least `h` times.

## Example
**Input:** citations = [3,0,6,1,5]<br>
**Output:** 3<br>
**Explanation:** [3,0,6,1,5] means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively.
Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.

## Approach - Sorting(Descending Order)
1. Sort the array in descending order first.
2. Initialize `h = 0`
3. Loop the whole array from `0 to n - 1`
4. Check if `citations[i] >= i + 1` then update `h = i + 1`
5. Return `h`

## Time and Space Complexity
**TC** - `O(N)` -- for searching upto `n` elements.<br>
**SC** - `O(1)` -- uses no extra space or memory.
