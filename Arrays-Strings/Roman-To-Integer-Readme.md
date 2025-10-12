# 13. Roman to Integer - Easy

## Problem Statement
Convert a Roman numeral to an integer.

- Roman numerals: `I=1, V=5, X=10, L=50, C=100, D=500, M=1000`

- Normally written largest to smallest (e.g., `XII = 10 + 1 + 1 = 12`)

- Subtraction rules:

  - `I` before `V` or `X` → 4, 9

  - `X` before `L` or `C` → 40, 90

  - `C` before `D` or `M` → 400, 900

Given a roman numeral, convert it to an integer.

## Example
**Input:** s = "III"<br>
**Output:** 3<br>
**Explanation:** III = 3.

## Approach - Hashing
1. Store the roman numbers and their corressponding integer values in an `unordered_map`.
2. Loop over from `0 to n - 1`.
3. If the current hashed value is greater than then next hashed value then subtract the current value from the `total`.
4. Else, add the current value from the `total`.
5. Return the `total`.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
