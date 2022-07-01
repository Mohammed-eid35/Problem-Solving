class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        queue<int> zeros;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (!nums[i]) zeros.push(i);
            else if (!zeros.empty()) {
                swap(nums[i], nums[zeros.front()]);
                zeros.pop();
                zeros.push(i);
            }
        }
    }
};