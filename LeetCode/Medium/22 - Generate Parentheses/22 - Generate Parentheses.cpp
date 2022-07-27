class Solution {
private:
    vector<string> ret;
    string cur;
    int n;
public:
    vector<string> generateParenthesis(int n) {
        solve(0, n << 1);
        return ret;
    }
    
    void solve(int i, int n) {
        if (i == n) {
            if (valid()) ret.push_back(cur);
            return;
        }
        
        cur += '(';
        solve(i + 1, n);
        cur.pop_back();
        
        cur += ')';
        solve(i + 1, n);
        cur.pop_back();
    }
    
    bool valid() {
        int cnt = 0;
        for (char ch : cur) {
            if (ch == '(')
                cnt++;
            else
                cnt--;
            if (cnt < 0) return false;
        }
        return !cnt;
    }
};