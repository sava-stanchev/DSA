/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function (matrix, target) {
    const ROWS = matrix.length;
    const COLS = matrix[0].length;

    let top = 0;
    let bot = ROWS - 1;
    let row = 0;

    while (top <= bot) {
        row = Math.floor((top + bot) / 2);

        if (target > matrix[row][COLS - 1]) {
            top = row + 1;
        } else if (target < matrix[row][0]) {
            bot = row - 1;
        } else {
            break;
        }
    }

    if (!(top <= bot)) return false;

    let l = 0;
    let r = COLS - 1;

    while (l <= r) {
        const m = Math.floor((l + r) / 2);

        if (target > matrix[row][m]) {
            l = m + 1;
        } else if (target < matrix[row][m]) {
            r = m - 1;
        } else {
            return true;
        }
    }

    return false;
};
