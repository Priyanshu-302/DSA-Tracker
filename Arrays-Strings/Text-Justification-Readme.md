# 68. Text Justification - Hard

## Problem Statement
Given an array of strings `word`s and a width `maxWidth`, format the text such that each line has exactly `maxWidth` characters and is fully (left and right) justified.

You should pack your words in a greedy approach; that is, pack as many words as you can in each line. Pad extra spaces `' '` when necessary so that each line has exactly `maxWidth` characters.

Extra spaces between words should be distributed as evenly as possible. If the number of spaces on a line does not divide evenly between words, the empty slots on the left will be assigned more spaces than the slots on the right.

For the last line of text, it should be left-justified, and no extra space is inserted between words.

****Note:****

- A word is defined as a character sequence consisting of non-space characters only.
- Each word's length is guaranteed to be greater than `0` and not exceed `maxWidth`.
- The input array `words` contains at least one word.

## Example
Input: words = ["This", "is", "an", "example", "of", "text", "justification."], maxWidth = 16<br>
Output:<br>
[
   "This    is    an",<br>
   "example  of text",<br>
   "justification.  "<br>
]

## Approach
1. Use a loop to collect words into the current line (curr) until adding another word exceeds maxWidth.
2. Keep track of the total number of characters (total_cnt) in the current line.
3. Calculate the total number of spaces to insert: total_spaces = maxWidth - total_cnt
4. If there is only one word, left-justify it by adding all spaces to the end.
5. Otherwise:
- Compute the number of gaps between words → gaps = curr.size() - 1
  - Distribute spaces evenly:
  - spaceEvenly = total_spaces / gaps
  - spacesOddly = total_spaces % gaps (extra spaces for leftmost gaps)
  - Build the justified line by adding words + calculated spaces.
6. Join all remaining words with a single space.
7. Pad the remaining spaces to the right to make the line exactly maxWidth.
8. Each line is stored in a result vector res.

## Time and Space Complexities
**TC** - `O(N)`<br>
**SC** - `O(1)`
