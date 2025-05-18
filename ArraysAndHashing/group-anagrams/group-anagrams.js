/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
  let map = new Map();

  for (const str of strs) {
    const frequency = new Array(26).fill(0);

    for (const char of str) {
      const charCode = char.charCodeAt(0) - "a".charCodeAt(0);
      frequency[charCode]++;
    }

    let keyStr = frequency.toString();
    const values = map.get(keyStr) || [];
    values.push(str);
    map.set(keyStr, values);
  }

  return [...map.values()];
};
