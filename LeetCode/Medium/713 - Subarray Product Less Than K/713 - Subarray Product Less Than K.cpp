class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int n = nums.size(), prod = 1, counter = 0;
        for (int l = 0, r = 0; r < n; ++r) {
            prod *= nums[r];
            while (prod >= k) prod /= nums[l++];
            counter += r - l + 1;
        }
        return counter;
    }
};