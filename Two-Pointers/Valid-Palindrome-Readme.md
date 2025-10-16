# 125. Valid Palindrome - Easy

## Problem Statement
A phrase is a **palindrome** if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` if it is a palindrome, or `false` otherwise.

## Example
**Input:** s = "A man, a plan, a canal: Panama"<br>
**Output:** true<br>
**Explanation:** "amanaplanacanalpanama" is a palindrome.

## Approach - Two Pointer
1. First remove the alphanumeric characters and make each character lowercase using `isalnum()` and `tolower()` methods.
2. Store the result in a new string `cleaned`.
3. Declare two variables `i = 0` and `j = n - 1`.
4. Loop over upto `i < j`.
5. If all characters match from the front and the back return `true`.
6. Else, return `false`.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
