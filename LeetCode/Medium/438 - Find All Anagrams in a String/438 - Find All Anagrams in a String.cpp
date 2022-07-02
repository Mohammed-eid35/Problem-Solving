class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1 = s.size(), n2 = p.size();
        if (n1 < n2) return {};
        vector<int> fr1(26), fr2(26);
        for (auto c : p) fr2[c - 'a']++;
        for (int i = 0; i < n2; ++i) fr1[s[i] - 'a']++;
        vector<int> ret;
        if (cmp(fr1, fr2)) ret.push_back(0);
        for (int i = n2; i < n1; ++i) {
            fr1[s[i - n2] - 'a']--;
            fr1[s[i] - 'a']++;
            if (cmp(fr1, fr2)) ret.push_back(i - n2 + 1);
        }
        return ret;
    }
    
    bool cmp(vector<int> &fr1, vector<int> &fr2) {
        for (int i = 0; i < 26; ++i) {
            if (fr1[i] != fr2[i]) {
                return false;
            }
        }
        return true;
    }
};