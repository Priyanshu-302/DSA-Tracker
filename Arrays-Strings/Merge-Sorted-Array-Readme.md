# 88. Merge Sorted Array - Medium

# Problem Statement
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively. Merge nums1 and nums2 into a single array sorted in non-decreasing order. The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

**Example**<br>
Input - nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3<br>
Output - [1,2,2,3,5,6]<br>
Explanation - The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6].<br>

## Approach
We will use **two-pointer** technique to solve this problem starting from the end.<br>
1. Use three pointers:
   - `i = m - 1 -> for last valid element for nums1`
   - `j = n - 1 -> for last valid element for nums2`
   - `idx = m + n - 1 -> for the total size of the array nums1 after merging`
2. Compare the values of `i` and `j`.
3. If `nums1[i] > nums2[j]` then put `nums1[idx--] = nums1[i--]`
4. Similarly for `nums2[j]`.
5. If there are any element in `nums2` copy it into `nums1`.

## Time and Space Complexity
TC - `O(m + n)` - Each element is compared or moved once.<br>
SC - `O(1)` - In-place merge, no extra space used.
