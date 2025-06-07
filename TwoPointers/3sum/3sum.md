https://leetcode.com/problems/3sum/

Time O(n^2) | Space O(1)

sort input, for each first element, find next two where -a = b+c, if a=prevA, skip a to elim duplicates; to find b,c use two pointers, left/right on remaining list
