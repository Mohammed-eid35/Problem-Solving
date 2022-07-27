class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size(), cur = 0, reached = 0;
        while (cur < n && cur <= reached) {
            reached = max(cur + nums[cur], reached);
            cur++;
        }
        return cur == n;
    }
};