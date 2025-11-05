# 128. Longest Consecutive Sequence - Medium
Given an unsorted array of integers `nums`, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in `O(n)` time.

## Example
Input: nums = `[100,4,200,1,3,2]`<br>
Output: 4<br>
Explanation: The longest consecutive elements sequence is `[1, 2, 3, 4]`. Therefore its length is 4.

## Approach
1. Store all the elements in a map and stoe the element itself as values.
2. Check if `it.second + 1 == nextIt.second`, do length++;
3. Else, store the longest length and reset `length = 1`.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(N)`
