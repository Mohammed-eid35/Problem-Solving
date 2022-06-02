/**
 * @param {number} n
 * @return {number[][]}
 */
var generateMatrix = function(n) {
    const ret = [...Array(n)].map(() => Array(n));
    const dirs = [[0, 1], [1, 0], [0, -1], [-1, 0]];
    const steps = [n, n - 1];

    let value = 1, dir = 0;
    let x = 0, y = -1;

    while (steps[dir % 2] > 0) {
        for (let i = 0; i < steps[dir % 2]; ++i) {
            x += dirs[dir][0];
            y += dirs[dir][1];
            ret[x][y] = value++;
        }

        steps[dir % 2]--;
        dir = (dir + 1) % 4;
    }
    
    return ret;
};
