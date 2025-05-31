/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function (nums, k) {
    const count = new Map();
    const bucket = Array.from({ length: nums.length + 1 }, () => []);

    for (let n of nums) {
        count.set(n, (count.get(n) || 0) + 1);
    }

    for (let [num, freq] of count) {
        bucket[freq].push(num);
    }

    const result = [];

    for (let i = bucket.length - 1; i >= 0; i--) {
        if (bucket[i]) result.push(...bucket[i]);
        if (result.length === k) return result;
    }
};
