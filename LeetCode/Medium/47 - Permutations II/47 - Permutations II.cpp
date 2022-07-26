class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        do {
            res.insert(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        
        vector<vector<int>> ret;
        for (auto vc : res) ret.push_back(vc);
        return ret;
    }
};