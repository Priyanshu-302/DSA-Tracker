# 135. Candy - Hard

## Problem Statement
There are `n` children standing in a line. Each child is assigned a rating value given in the integer array `ratings`.

You are giving candies to these children subjected to the following requirements:

- Each child must have at least one candy.
- Children with a higher rating get more candies than their neighbors.

Return *the minimum number of candies you need to have to distribute the candies to the children.*

## Example
**Input:** ratings = [1,0,2]<br>
**Output:** 5<br>
**Explanation:** You can allocate to the first, second and third child with 2, 1, 2 candies respectively.

## Approach
1. Store all the elements of the input array in an extra array `candies` because at the end we will have accumulate or sum all the values of the updated array.
2. Do a left pass and see if `ratings[i] > ratings[i - 1]`, then update `candies[i]` to `candies[i - 1] + 1`
3. Do a right pass and see if `ratings[i] > ratings[i + 1]`, then update `candies[i]` to `max(candies[i], candies[i + 1] + 1)`
4. Return the sum of all the element in the `candies` array.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(N)`
