/**
 * @param {number[][]} grid
 * @return {number}
 */
 var maxAreaOfIsland = function(grid) {
    const n = grid.length, m = grid[0].length;
    const dirs = [[0, 1], [1, 0], [0, -1], [-1, 0]];
    
    const valid = (i, j) => i >= 0 && i < n && j >= 0 && j < m;

    const DFS = (i, j) => {
        if (!valid(i, j) || !grid[i][j]) return 0;
        grid[i][j] = 0;

        let ret = 1;
        for (let dir of dirs) ret += DFS(i + dir[0], j + dir[1]);

        return ret;
    }

    let ret = 0;
    for (let i = 0; i < n; ++i) {
        for (let j = 0; j < m; ++j) {
            if (grid[i][j]) 
                ret = Math.max(ret, DFS(i, j));
        }
    }
    
    return ret;
};
