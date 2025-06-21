https://leetcode.com/problems/longest-repeating-character-replacement/

Time O(n) | Space O(m)

-   m = total number of unique characters in the string

use sliding window, keep track of the most frequent char in the window. if window size minus that freq > k, shrink the window, update max length as you go
