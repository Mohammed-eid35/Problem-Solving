class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> fr(26);
        for (auto c : s) fr[c - 'a']++;
        for (auto c : t) fr[c - 'a']--;
        char ret;
        for (char c = 'a'; c <= 'z'; ++c) {
            if (fr[c - 'a']) {
                ret = c;
                break;
            }
        }
        return ret;
    }
};