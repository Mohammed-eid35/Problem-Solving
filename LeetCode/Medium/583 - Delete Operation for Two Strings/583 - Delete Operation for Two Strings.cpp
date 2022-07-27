class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                dp[i + 1][j + 1] = (
                    word1[i] == word2[j] ? 
                    dp[i][j] + 1 : 
                    max(dp[i + 1][j], dp[i][j + 1])
                );
            }
        }
        return n - dp[n][m] + m - dp[n][m];
    }
};