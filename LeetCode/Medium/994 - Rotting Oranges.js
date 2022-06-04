/**
 * @param {number[][]} grid
 * @return {number}
 */
var orangesRotting = function(grid) {
    const n = grid.length, m = grid[0].length;
    const queue = [];
    const minTime = [...Array(n)].map(row => Array(m).fill(Infinity));
    for (let i = 0; i < n; ++i) {
        for (let j = 0; j < m; ++j) {
            if (grid[i][j] == 2) {
                queue.push([i, j, 0]);
                minTime[i][j] = 0;
            }
        }
    }
    
    const valid = (i, j) => i >= 0 && i < n && j >= 0 && j < m; 
    
    const dirs = [[1, 0], [0, 1], [-1, 0], [0, -1]];

    while (queue.length) {
        const [i, j, time] = queue.shift();
        
        for (let dir of dirs) {
            const x = i + dir[0], y = j + dir[1];
            if (valid(x, y) && grid[x][y] == 1 && minTime[x][y] > time + 1) {
                minTime[x][y] = time + 1;
                queue.push([x, y, time + 1]);
            }
        }
    }

    let ret = 0, impossible = false;
    for (let i = 0; i < n; ++i) {
        for (let j = 0; j < m; ++j) {
            if (minTime[i][j] === Infinity) {
                if (grid[i][j] === 1) return -1;
                minTime[i][j] = 0;
            }
            ret = Math.max(ret, minTime[i][j]);
        }
    }
    
    return ret;
};
