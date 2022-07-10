class Solution {
public:
    double average(vector<int>& salary) {
        int mn = INT_MAX, mx = INT_MIN, sum = 0;
        for (auto s : salary) {
            sum += s;
            mn = min(mn, s);
            mx = max(mx, s);
        }
        return (double)(sum - mx - mn) / (salary.size() - 2);
    }
};