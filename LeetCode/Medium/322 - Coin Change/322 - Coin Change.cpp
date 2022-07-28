class Solution {
public:
    const int OO = 0x3f3f3f3f;
    int n;
    vector<vector<int>> dp;
    
    int coinChange(vector<int>& coins, int amount) {
        n = coins.size();
        dp = vector<vector<int>>(n, vector<int>(amount + 1, -1));
        int ret = solve(0, amount, coins);
        return (ret == OO ? -1 : ret);
    }
    
    int solve(int i, int rem, vector<int> &coins) {
        if (!rem) return 0;
        if (i == n || rem < 0) return OO;
        
        int &ret = dp[i][rem];
        if (~ret) return ret;
        
        return ret = min(
            1 + solve(i, rem - coins[i], coins), 
            solve(i + 1, rem, coins)
        );
    }
};