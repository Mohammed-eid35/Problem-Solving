class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size(); 
        if (n < 2) return n ? nums[0] : 0;
        return max(solve(0, n - 2, nums), solve(1, n - 1, nums));
    }
    
    int solve(int lo, int hi, vector<int> &nums) {
        int pre = 0, cur = 0;
        for (int i = lo; i <= hi; ++i) {
            int temp = max(pre + nums[i], cur);
            pre = cur;
            cur = temp;
        }
        return cur;
    }
};