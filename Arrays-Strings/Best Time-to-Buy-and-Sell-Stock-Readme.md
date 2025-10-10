# 121. Best Time to Buy and Sell Stock - Easy

## Problem Statement
You are given an array `prices` where `prices[i]` is the price of a given stock on the `ith` day.

You want to maximize your profit by choosing a **single day** to buy one stock and choosing a **different day in the future** to sell that stock.

Return the *maximum profit you can achieve from this transaction*. If you cannot achieve any profit, return `0`.

## Example
**Input:** prices = [7,1,5,3,6,4]<br>
**Output:** 5<br>
**Explanation:** Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.<br>
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

## Approach
1. Before starting the approach let me clear that we have to return the maximum profit. And maximum profit can be only gained if the selling price is greater than the buying price or cost price.
2. So we initialize a variable `best_buy` with value of `prices[0]` as the first buy and `max_profit = 0`
3. We loop from `1 to n - 1`
4. Check if the `best_buy < max_profit`, then we calculate the `max_profit` by taking out the maximum value between `max_profit` and `prices[i] - best_buy`
5. Else, we just update the `best_buy` to the current `prices[i]`
6. Lastly, we return the `max_profit`

## Time and Space Complexity
**TC** - `O(N)` -- for searching upto `n` elements.<br>
**SC** - `O(1)` -- no extra spaces or memory used.
