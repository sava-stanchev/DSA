/**
 * @param {number[]} temperatures
 * @return {number[]}
 */
var dailyTemperatures = function (temperatures) {
    const res = new Array(temperatures.length).fill(0);
    const stack = [];

    for (let i = 0; i < temperatures.length; i++) {
        while (
            stack.length > 0 &&
            temperatures[i] > temperatures[stack.at(-1)]
        ) {
            const stackInd = stack.pop();
            res[stackInd] = i - stackInd;
        }

        stack.push(i);
    }

    return res;
};
