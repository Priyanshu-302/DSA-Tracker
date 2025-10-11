# 134. Gas Station - Medium

## Problem Statement
There are `n` gas stations along a circular route, where the amount of gas at the `ith` station is `gas[i]`.

You have a car with an unlimited gas tank and it costs `cost[i]` of gas to travel from the `ith` station to its next `(i + 1)th` station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays `gas` and `cost`, return *the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return* `-1`. If there exists a solution, it is **guaranteed** to be **unique**.

## Example
**Input:** gas = [1,2,3,4,5], cost = [3,4,5,1,2]<br>
**Output:** 3<br>
**Explanation:**
Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 4. Your tank = 4 - 1 + 5 = 8
Travel to station 0. Your tank = 8 - 2 + 1 = 7
Travel to station 1. Your tank = 7 - 3 + 2 = 6
Travel to station 2. Your tank = 6 - 4 + 3 = 5
Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.
Therefore, return 3 as the starting index.

## Approach
1. Initialize 4 variables `total_gas = 0`, `total_cost = 0`, `curr_gas = 0` and `start = 0`
2. Calculate the `total_gas` and `total_cost`
3. If `total_gas < total_cost` it is not possible to reach the next index, so return `-1`
4. Else, calculate the `curr_gas` as `curr_gas += gas[i] - cost[i]`
5. If the `curr_gas < 0` then it is guranteed that the current index is not the starting index so increment `start` and reset the value of `curr_gas` to 0.
6. Return `start`

## Time and Space Complexity
**TC** - `O(N)`<br>
**SC** - `O(1)`
