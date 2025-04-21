/**
 * https://leetcode.com/problems/longest-repeating-character-replacement/
 *
 * Time O(n) | Space O(m)
 * m = total number of unique characters in the string
 *
 * for each capital char, check if it could create the longest repeating substr,
 * use sliding window to optimize; check if windowlen=1 works,
 * if yes, increment len, if not, shift window right;
 *
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var characterReplacement = function (s, k) {
    let count = new Map();
    let res = 0;

    let l = 0;
    let maxf = 0;
    for (let r = 0; r < s.length; r++) {
        count.set(s[r], (count.get(s[r]) || 0) + 1);
        maxf = Math.max(maxf, count.get(s[r]));

        while (r - l + 1 - maxf > k) {
            count.set(s[l], count.get(s[l]) - 1);
            l++;
        }

        res = Math.max(res, r - l + 1);
    }

    return res;
};
