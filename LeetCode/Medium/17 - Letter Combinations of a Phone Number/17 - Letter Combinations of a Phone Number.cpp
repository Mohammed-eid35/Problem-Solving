class Solution {
private:
    vector<string> pad = {"", "", "abc", "def", "ghi", "jkl","mno", "pqrs", "tuv", "wxyz"};
    vector<string> ret;
    string cur;
    int n;
public:
    vector<string> letterCombinations(string digits) {
        n = digits.size();
        if (!n) return {};
        solve(0, digits);
        return ret;
    }
    
    void solve(int i, string &digits) {
        if (i == n) {
            ret.push_back(cur);
            return;
        }
        
        for (char ch : pad[digits[i] - '0']) {
            cur += ch;
            solve(i + 1, digits);
            cur.pop_back();
        }
    }
};