class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for (auto account : accounts) {
            int cur = 0;
            for (auto acc : account) {
                cur += acc;
            }
            maxWealth = max(maxWealth, cur);
        }
        return maxWealth;
    }
};