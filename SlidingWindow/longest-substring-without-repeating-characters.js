/**
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/
 *
 * Time O(n) | Space O(n)
 *
 * sliding window, if we see same char twice within curr window, shift start position;
 *
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
    let map = new Map();
    let l = 0;
    let res = 0;

    for (let r = 0; r < s.length; r++) {
        if (map.has(s[r])) {
            l = Math.max(map.get(s[r]) + 1, l);
        }

        map.set(s[r], r);
        res = Math.max(res, r - l + 1);
    }

    return res;
};
