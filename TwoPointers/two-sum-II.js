/**
 * https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 *
 * Time O(n) | Space O(1)
 *
 * use 2 pointers from both ends;
 * move inward based on sum vs target.
 * return 1-based indices when sum matches target.
 *
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (numbers, target) {
    let l = 0;
    let r = numbers.length - 1;

    while (l < r) {
        const currSum = numbers[l] + numbers[r];

        if (currSum > target) {
            r--;
        } else if (currSum < target) {
            l++;
        } else {
            return [l + 1, r + 1];
        }
    }

    return [];
};
