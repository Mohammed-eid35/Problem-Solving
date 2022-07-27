class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size(), mx = 0;
        vector<int> dp(n, 1), cnt(n, 1);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    if (dp[i] < dp[j] + 1) {
                        dp[i] = dp[j] + 1;
                        cnt[i] = cnt[j];
                    }
                    else if (dp[i] == dp[j] + 1) { 
                        cnt[i] += cnt[j];
                    }
                }
            }
            mx = max(mx, dp[i]);
        }
        int ret = 0;
        for (int i = 0; i < n; ++i) { 
            if (dp[i] == mx) ret += cnt[i];
        }
        return ret;
    }
};