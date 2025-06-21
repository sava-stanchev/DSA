https://leetcode.com/problems/permutation-in-string/

Time O(n) | Space O(1)

use sliding window of size s1.length, track char counts. compare window to s1, shift window one char at a time, updating counts and match count. return true if all counts match
