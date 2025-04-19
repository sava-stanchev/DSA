/**
 * https://leetcode.com/problems/valid-palindrome/
 *
 * Time O(n) | Space O(1)
 *
 * left, right pointers, update left and right until each points at alphanum,
 * compare left and right, continue until left >= right,
 * don’t distinguish between upper/lowercase;
 *
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
  let l = 0;
  let r = s.length - 1;

  while (l < r) {
    while (l < r && !alphaNum(s[l])) {
      l++;
    }
    while (r > l && !alphaNum(s[r])) {
      r--;
    }
    if (s[l].toLowerCase() !== s[r].toLowerCase()) {
      return false;
    }

    l++;
    r--;
  }

  return true;
};

function alphaNum(c) {
  return (
    (c >= "A" && c <= "Z") || (c >= "a" && c <= "z") || (c >= "0" && c <= "9")
  );
}
