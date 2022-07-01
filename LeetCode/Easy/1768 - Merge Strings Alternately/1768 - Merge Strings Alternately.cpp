class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size(), n = max(n1, n2);
        string ret = "";
        for (int i = 0; i < n; ++i) {
            if (i < n1) ret += word1[i];
            if (i < n2) ret += word2[i];
        }
        return ret;
    }
};