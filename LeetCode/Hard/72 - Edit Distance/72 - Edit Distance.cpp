class Solution {
public:
    int n, m;
    vector<vector<int>> dp;
    
    int minDistance(string word1, string word2) {
        n = word1.size(), m = word2.size();
        dp = vector<vector<int>> (n, vector<int>(m, -1));
        return solve(0, 0, word1, word2);
    }
    
    int solve(int i, int j, string &str1, string &str2) {
        if (i == n) return m - j;
        if (j == m) return n - i;
        
        int &ret = dp[i][j];
        if (~ret) return ret;
        
        if (str1[i] == str2[j]) return ret = solve(i + 1, j + 1, str1, str2);
        
        return ret = 1 + min({
            solve(i + 1, j + 1, str1, str2),
            solve(i + 1, j, str1, str2),
            solve(i, j + 1, str1, str2)
        });
    }
};