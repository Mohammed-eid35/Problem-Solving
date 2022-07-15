class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), sum = 0, l = 0, r = 0, mn = INT_MAX;
        while (r < n) {
            while (r < n && sum < target) sum += nums[r++];
            while (l < r && sum >= target) {
                mn = min(mn, r - l);
                sum -= nums[l++];
            }
        }
        return mn == INT_MAX ? 0 : mn;
    }
};