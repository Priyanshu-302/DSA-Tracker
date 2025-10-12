# Integer to Roman - Medium

## Problem Statement
Integer to Roman
Convert an integer to a Roman numeral.

- Roman symbols: `I=1, V=5, X=10, L=50, C=100, D=500, M=1000`

- Build numerals from highest to lowest value.

- Use subtractive forms for 4, 9, 40, 90, 400, 900 (`IV, IX, XL, XC, CD, CM`).

- Only `I, X, C, M` can repeat up to 3 times; others (`V, L, D`) never repeat.

Given an integer, convert it to a Roman numeral.

## Example
**Input:** num = 3749<br>
**Output:** "MMMDCCXLIX"<br>
**Explanation:**
3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)<br>
 700 = DCC as 500 (D) + 100 (C) + 100 (C)<br>
  40 = XL as 10 (X) less of 50 (L)<br>
   9 = IX as 1 (I) less of 10 (X)<br>
Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places

## Approach
1. We will use a `map` to store all the integers and roman numbers and we will store it in decreasing order.
2. If the `num` is greater than or equals to the `key` then `res += p.second` and `num -= p.first`
3. Return `res`

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
