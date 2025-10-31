# 383. Ransom Note - Easy

## Problem Statement
Given two strings `ransomNote` and `magazine`, return `true` if `ransomNote` can be constructed by using the letters from `magazine` and `false` otherwise.

Each letter in `magazine` can only be used once in `ransomNote`.

## Example
Input: ransomNote = "a", magazine = "b"<br>
Output: false

## Approach
1. Take an `unordered_map` which will store the frequency.
2. Now since we have to see that if using exactly each word in `magazine` can construct the `ransomNote` we will first count the frequencies of the `magazine`.
3. Now, if each index of the `ransomNote` is being already mapped then decrease the frequency by 1 otherwise if the current index element is not mapped then return a false;

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(N)`
