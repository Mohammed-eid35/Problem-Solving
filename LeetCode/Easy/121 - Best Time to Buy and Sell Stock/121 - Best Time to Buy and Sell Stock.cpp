class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0], ret = 0;
        for (auto price : prices) {
            mn = min(mn, price);
            
            ret = max(ret, price - mn);
        }
        return ret;
    }
};