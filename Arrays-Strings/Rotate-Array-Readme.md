# 189. Rotate Array - Medium

## Problem Statement
Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

## Example
**Input:** nums = [1,2,3,4,5,6,7], k = 3<br>
**Output:** [5,6,7,1,2,3,4]<br>
**Explanation:**<br>
rotate 1 steps to the right: [7,1,2,3,4,5,6]<br>
rotate 2 steps to the right: [6,7,1,2,3,4,5]<br>
rotate 3 steps to the right: [5,6,7,1,2,3,4]

## Approach
1. Before rotating the array one thing should be kept in mind that if rotation word appears it hiddenly tells about using the modulus(`%`) opreator because in rotation we have to traverse the whole array more than once.
2. We will update `k` as `k = k % n`
3. Now the rotation will happen in 3 easy steps:<br>
   1. Rotate the whole array.<br>
   2. Rotate the array from `0 to k - 1`<br>
   3. Rotate the array from `k to n - 1`
4. And inside each loop there will be a simply 3 line swap code using a third variable `temp`

## Time and Space Complexity
**TC** - `O(N)` -- for searching upto `n` elements.<br>
**SC** - `O(1)` -- no extra spaces or memory used.
