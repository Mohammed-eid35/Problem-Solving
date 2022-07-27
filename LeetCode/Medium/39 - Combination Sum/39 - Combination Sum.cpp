class Solution {
private:
    int n;
    vector<vector<int>> res;
    vector<int> cur;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        n = candidates.size();
        solve(0, target, candidates);
        return res;
    }
    
    void solve(int i, int rem, vector<int> &vc) {
        if (i == n) {
            if (!rem) res.push_back(cur);
            return;
        }
        
        if (rem < 0) return;
        
        solve(i + 1, rem, vc);
        
        cur.push_back(vc[i]);
        solve(i, rem - vc[i], vc);
        cur.pop_back();
    }
};