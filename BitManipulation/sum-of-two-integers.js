/**
 * https://leetcode.com/problems/sum-of-two-integers/
 *
 * Time O(1) | Space O(1)
 *
 * add bit by bit, be mindful of carry,
 * after adding, if carry is still 1, then add it as well
 *
 * @param {number} a
 * @param {number} b
 * @return {number}
 */
var getSum = function (a, b) {
  while (b !== 0) {
    let tmp = (a & b) << 1;
    a = a ^ b;
    b = tmp;
  }

  return a;
};
