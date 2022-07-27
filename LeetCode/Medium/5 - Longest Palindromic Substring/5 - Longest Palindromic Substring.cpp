class Solution {
public:
    int n;
    
    string longestPalindrome(string s) {
        n = s.size();
        int st = 0, len = 0;
        for (int i = 0; i < n; ++i) {
            int len1 = solve(i, i, s);
            int len2 = solve(i, i + 1, s);
            int mx = max(len1, len2);
            
            if (len < mx) {
                st = i - (mx - 1) / 2;
                len = mx;
            }
        }
        return s.substr(st, len);
    }
    
    int solve(int lo, int hi, string &s) {
        while (lo >= 0 && hi < n && s[lo] == s[hi]) {
            lo--;
            hi++;
        }
        return hi - lo - 1;
    }
};