/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  let prevMap = new Map();

  for (let i = 0; i < nums.length; i++) {
    const diff = target - nums[i];

    if (prevMap.has(diff)) {
      return [prevMap.get(diff), i];
    } else {
      prevMap.set(nums[i], i);
    }
  }
  return [];
};
