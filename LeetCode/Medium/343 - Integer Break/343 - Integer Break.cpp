class Solution {
public:
    vector<int> dp;
    int integerBreak(int n) {
        dp = vector<int>(n + 1, -1);
        return solve(n, 0);
    }
    
    int solve(int rem, int k) {
        if (!rem) return k > 1; 
        if (rem < 0) return 0;
        
        int &ret = dp[rem];
        if (~ret) return ret;
        
        for (int i = 1; i <= rem; ++i) {
            ret = max(ret, i * solve(rem - i, k + 1));
        }
        
        return ret;
    }
};