class Solution {
public:
    vector<int> orig, shuf;
    Solution(vector<int>& nums) {
        orig = shuf = nums;
        sort(shuf.begin(), shuf.end());
    }
    
    vector<int> reset() {
        return orig;
    }
    
    vector<int> shuffle() {
        next_permutation(shuf.begin(), shuf.end());
        return shuf;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */