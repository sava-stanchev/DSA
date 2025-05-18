/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  if (s.length !== t.length) return false;

  let map = new Map();

  for (const char of s) {
    const count = (map.get(char) || 0) + 1;
    map.set(char, count);
  }

  for (const char of t) {
    if (map.has(char)) {
      const count = map.get(char) - 1;
      map.set(char, count);

      if (map.get(char) === 0) {
        map.delete(char);
      }
    } else {
      return false;
    }
  }

  return true;
};
