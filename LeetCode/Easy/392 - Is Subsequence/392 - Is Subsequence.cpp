class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.size(), n2 = t.size(), i = 0, j = 0;
        while (i < n1 && j < n2) {
            i += (s[i] == t[j]);
            j++;
        }
        return (i == n1);
    }
};