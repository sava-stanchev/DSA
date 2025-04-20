/**
 * https://leetcode.com/problems/minimum-window-substring/
 *
 * Time O(n) | Space O(m)
 * m = total number of unique characters in the strings t and s
 *
 * need is num of unique char in T, HAVE is num of char we have valid count for,
 * sliding window, move right until valid, if valid, increment left until invalid,
 * to check validity keep track if the count of each unique char is satisfied;
 *
 * @param {string} s
 * @param {string} t
 * @return {string}
 */
var minWindow = function (s, t) {
    if (s.length < t.length) {
        return "";
    }

    let countT = {};
    let window = {};
    for (let c of t) {
        countT[c] = (countT[c] || 0) + 1;
    }

    let have = 0;
    let need = Object.keys(countT).length;
    let res = [-1, -1];
    let resLen = Infinity;
    let l = 0;

    for (let r = 0; r < s.length; r++) {
        let c = s[r];
        window[c] = (window[c] || 0) + 1;

        if (countT[c] && window[c] === countT[c]) {
            have++;
        }

        while (have === need) {
            if (r - l + 1 < resLen) {
                resLen = r - l + 1;
                res = [l, r];
            }

            window[s[l]]--;
            if (countT[s[l]] && window[s[l]] < countT[s[l]]) {
                have--;
            }
            l++;
        }
    }

    return resLen === Infinity ? "" : s.slice(res[0], res[1] + 1);
};
