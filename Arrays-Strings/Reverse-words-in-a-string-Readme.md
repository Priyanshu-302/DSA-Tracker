# 151. Reverse Words in a String - Medium

## Problem Statement
Given an input string `s`, reverse the order of the words.

A **word** is defined as a sequence of non-space characters. The **words** in `s` will be separated by at least one space.

***Return a string of the words in reverse order concatenated by a single space.***

**Note** that `s` may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

## Example
**Input:** s = "the sky is blue"<br>
**Output:** "blue is sky the"

## Approach
1. Reverse the original string.
2. Loop over from `0 to n - 1`
3. Check if current element is not equal to an empty space then add it in a new string `word`
4. Reverse the string `word`
5. Lastly add it in the `res` string i.e. `res += " " + word`
6. Return the string `res` from the index `1` because the `0th` index will everytime contain an leading whitespace

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
