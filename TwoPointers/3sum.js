/**
 * https://leetcode.com/problems/3sum/
 *
 * Time O(n^2) | Space O(1)
 *
 * sort input, for each first element, find next two where -a = b+c,
 * if a=prevA, skip a, if b=prevB skip b to elim duplicates;
 * to find b,c use two pointers, left/right on remaining list;
 *
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
    nums.sort((a, b) => a - b);
    const res = [];

    for (let i = 0; i < nums.length; i++) {
        if (nums[i] > 0) break;
        if (i > 0 && nums[i] === nums[i - 1]) continue;

        let l = i + 1;
        let r = nums.length - 1;
        while (l < r) {
            const sum = nums[i] + nums[l] + nums[r];
            if (sum > 0) {
                r--;
            } else if (sum < 0) {
                l++;
            } else {
                res.push([nums[i], nums[l], nums[r]]);
                l++;
                while (l < r && nums[l] === nums[l - 1]) {
                    l++;
                }
            }
        }
    }

    return res;
};
