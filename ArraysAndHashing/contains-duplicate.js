/**
 * https://leetcode.com/problems/contains-duplicate/
 *
 * Time O(n) | Space O(n)
 *
 * hash set to get unique values in array,
 * to check for duplicates easily
 *
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function (nums) {
  const seen = new Set();

  for (const num of nums) {
    if (seen.has(num)) return true;
    seen.add(num);
  }
  return false;
};
