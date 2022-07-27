class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                dp[i + 1][j + 1] = (
                    text1[i] == text2[j] ? 
                    dp[i][j] + 1 : 
                    max(dp[i + 1][j], dp[i][j + 1])
                );
            }
        }
        return dp[n][m];
    }
};