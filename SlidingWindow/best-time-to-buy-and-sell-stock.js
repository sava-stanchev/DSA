/**
 * https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 *
 * Time O(n) | Space O(1)
 *
 * find local min and search for local max, sliding window;
 *
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
    let l = 0;
    let r = 1;
    let maxP = 0;

    while (r < prices.length) {
        if (prices[l] < prices[r]) {
            let profit = prices[r] - prices[l];
            maxP = Math.max(maxP, profit);
        } else {
            l = r;
        }

        r++;
    }

    return maxP;
};
