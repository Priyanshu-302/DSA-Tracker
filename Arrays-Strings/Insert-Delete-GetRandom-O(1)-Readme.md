# 380. Insert Delete GetRandom O(1) - Medium

## Problem Statement
Implement the `RandomizedSet` class:

- `RandomizedSet()` Initializes the `RandomizedSet` object.
- `bool insert(int val)` Inserts an item `val` into the set if not present. Returns `true` if the item was not present, `false` otherwise.
- `bool remove(int val)` Removes an item `val` from the set if present. Returns `true` if the item was present, `false` otherwise.
- `int getRandom()` Returns a random element from the current set of elements (it's guaranteed that at least one element exists when this method is called). Each element must have the **same probability** of being returned.
You must implement the functions of the class such that each function works in **average** `O(1)` time complexity.

## Example
**Input**<br>
["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
[[], [1], [2], [2], [], [1], [2], []]<br>
**Output**
[null, true, false, true, 2, true, false, 2]<br>

**Explanation**
RandomizedSet randomizedSet = new RandomizedSet();
randomizedSet.insert(1); // Inserts 1 to the set. Returns true as 1 was inserted successfully.
randomizedSet.remove(2); // Returns false as 2 does not exist in the set.
randomizedSet.insert(2); // Inserts 2 to the set, returns true. Set now contains [1,2].
randomizedSet.getRandom(); // getRandom() should return either 1 or 2 randomly.
randomizedSet.remove(1); // Removes 1 from the set, returns true. Set now contains [2].
randomizedSet.insert(2); // 2 was already in the set, so return false.
randomizedSet.getRandom(); // Since 2 is the only number in the set, getRandom() will always return 2.

## Approach
1. Declare a `set` globally as there is asked about set in the question.
2. In the `insert` function simply check `if(s.find(val) == s.end())` insert the value in the set and return `true` otherwise return `false`.
3. In the `remove` function simply check `if(s.find(val) != s.end())` erase the value in the set and return `true` otherwise return `false`.
4. In the `getRandom` function we store the values of the `set` in a vector and returned the random with same probability.

## Time and Space Complexity
**TC** - `O(1)`
**SC** - `O(N)`
