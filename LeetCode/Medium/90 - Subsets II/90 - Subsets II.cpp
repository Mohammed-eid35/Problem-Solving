class Solution {
private:
    int n;
    set<vector<int>> ret;
    vector<int> cur;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        n = nums.size();
        solve(0, nums);
        
        vector<vector<int>> result;
        for (auto i : ret) result.push_back(i);
        return result;
    }
    
    void solve(int i, vector<int> &nums) {
        if (i == n) {
            vector<int> vc = cur;
            sort(vc.begin(), vc.end());
            ret.insert(vc);
            return;
        }
        
        solve(i + 1, nums);
        
        cur.push_back(nums[i]);
        solve(i + 1, nums);
        cur.pop_back();
    }
};