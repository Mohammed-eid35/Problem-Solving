class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int n = s.size(), l = 0, r = 0, mx = 0, res = 1;
        while (r < n) {
            mp[s[r]]++;
            mx = max(mx, mp[s[r]]);
            if ((r - l + 1) - mx > k) {
                mp[s[l]]--;
                l++;
            }
            res = max(res, (r - l + 1));
            r++;   
        }
        return res;
    }
};