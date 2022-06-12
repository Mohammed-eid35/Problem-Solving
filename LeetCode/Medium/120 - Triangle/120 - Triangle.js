/**
 * @param {number[][]} triangle
 * @return {number}
 */
var minimumTotal = function(triangle) {
    const n = triangle.length;
    const dp = {};
    
    const solve = (i, j) => {
        if (i == n) return 0;
        if (j < 0 && j >= triangle.lenght) return Infinity;
        
        const key = `${i}-${j}`;
        if (dp.hasOwnProperty(key)) return dp[key];
        
        return dp[key] = Math.min(
            triangle[i][j] + solve(i + 1, j),
            triangle[i][j] + solve(i + 1, j + 1)
        );
    }
    
    return solve(0, 0);
};
