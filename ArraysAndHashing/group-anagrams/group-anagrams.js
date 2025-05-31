/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
    const res = new Map();

    for (let s of strs) {
        const count = new Array(26).fill(0);

        for (let c of s) {
            count[c.charCodeAt(0) - "a".charCodeAt(0)]++;
        }

        const key = count.join(",");
        const values = res.get(key) || [];

        values.push(s);
        res.set(key, values);
    }

    return [...res.values()];
};
