https://leetcode.com/problems/generate-parentheses/

Time O(4^n / n^(3/2)) | Space O(n)

use stack, backtrack with counts of open/close, add opening if open < n, add closing if close < open
