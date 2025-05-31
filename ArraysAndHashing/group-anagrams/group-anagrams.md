https://leetcode.com/problems/group-anagrams/

Time O($m \ast n$) | Space O($m \ast n$)

-   m = number of strings
-   n = average length of a string

for each of 26 chars, use count of each char in each word as key in hash map, value is the list of anagrams
