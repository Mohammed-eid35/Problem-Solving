class Solution {
private:
    int n;
    vector<vector<int>> ret;
    vector<int> cur;
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        n = candidates.size();
        sort(candidates.begin(), candidates.end());
        solve(0, target, candidates);
        return ret;
    }
    
    void solve(int i, int rem, vector<int> &vc) {
         if (!rem) {
            ret.push_back(cur);
            return;
        }
        if (i == n || rem < vc[i]) return;

        cur.push_back(vc[i]);
        solve(i + 1, rem - vc[i], vc);
        cur.pop_back();

        int tmp = vc[i];
        while (++i < n && vc[i] == tmp);
        solve(i, rem, vc);
    }
};