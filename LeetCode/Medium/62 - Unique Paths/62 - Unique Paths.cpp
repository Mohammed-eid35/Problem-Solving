class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n));
        dp[0][0] = 1;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                dp[i][j] += (
                    (j - 1 < 0 ? 0 : dp[i][j - 1]) +
                    (i - 1 < 0 ? 0 : dp[i - 1][j])
                );
            }
        }
        return dp[m - 1][n - 1];
    }
};