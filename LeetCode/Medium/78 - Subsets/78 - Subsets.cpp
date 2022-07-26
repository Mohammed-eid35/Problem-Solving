class Solution {
private:
    int n;
    vector<vector<int>> ret;
    vector<int> cur;
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        solve(0, nums);
        return ret;
    }
    
    void solve(int i, vector<int> &nums) {
        if (i == n) {
            ret.push_back(cur);
            return;
        }
        
        solve(i + 1, nums);
        
        cur.push_back(nums[i]);
        solve(i + 1, nums);
        cur.pop_back();
    }
};