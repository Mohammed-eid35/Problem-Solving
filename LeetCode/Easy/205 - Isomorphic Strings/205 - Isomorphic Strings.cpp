class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int st[256], ts[256];
        memset(st, -1, sizeof(st));
        memset(ts, -1, sizeof(ts));

        int sz = s.size();
        for (int i = 0; i < sz; ++i) {
            if (st[s[i]] == -1 && ts[t[i]] == -1) {
                st[s[i]] = t[i];
                ts[t[i]] = s[i];
                continue;
            }
            
            if (st[s[i]] != t[i]) return false;
        }
        return true;
    }
};