class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size(), steps = 0, lo = 0, hi = 0;
        while (hi < n - 1) {
            steps++; 
            int mx = hi + 1;
            for (int i = lo; i <= hi; ++i) {
                if (i + nums[i] >= n - 1) return steps;
                mx = max(mx, i + nums[i]);
            }
            lo = hi + 1;
            hi = mx;
        }
        return steps;
    }
};