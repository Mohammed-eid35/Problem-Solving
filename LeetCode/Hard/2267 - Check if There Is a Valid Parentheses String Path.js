/**
 * @param {character[][]} grid
 * @return {boolean}
 */
var hasValidPath = function(grid) {
    let dp = {};
    let n = grid.length, m = grid[0].length;
    
    let solve = (i, j, k) => {
        if (i >= n || j >= m) return false;
        
        k += (grid[i][j] === '(' ? 1 : -1);
        if (i == n - 1 && j == m - 1) return (k == 0);
        if (k < 0) return false;
        
        let key = `${i}-${j}-${k}`;
        if (dp[key] !== undefined) return dp[key];
        
        return dp[key] = solve(i + 1, j, k) || solve(i, j + 1, k);
    }
    
    return solve(0, 0, 0);
};
