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

    const res = [];

    for (let i = bucket.length - 1; i >= 0; i--) {
        for (let n of bucket[i]) {
            res.push(n);
            if (res.length === k) return res;
        }
    }
};
