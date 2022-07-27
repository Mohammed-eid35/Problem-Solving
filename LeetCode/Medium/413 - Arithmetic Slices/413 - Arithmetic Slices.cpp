class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;
        
        int ret = 0, cnt = 0 , cur = 0, pre = nums[1] - nums[0];
        for (int i = 1; i < n - 1; ++i) {
            cur = nums[i + 1] - nums[i];

            if (cur == pre) cnt++;
            else {
                pre = cur;
                cnt = 0;
            }

            ret += cnt;
        }
        return ret;
    }
};