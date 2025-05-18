https://leetcode.com/problems/group-anagrams/

Time O($m \ast n$) | Space O($m \ast n$)

- m = number of strings
- n = length of the longest string

for each of 26 chars, use count of each char in each word as array for key in hash map, value is the list of anagrams
