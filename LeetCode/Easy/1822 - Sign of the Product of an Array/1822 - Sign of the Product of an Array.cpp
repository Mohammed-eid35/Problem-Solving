class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ret = 1;
        for (auto num : nums) {
            if (!num) return 0;
            ret *= (num > 0 ? 1 : -1);
        }
        return ret;
    }
};