class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> fr;
        int ret = 0;
        for (auto c : s) {
            fr[c]++;
            if (!(fr[c] & 1)) ret += 2;
        }
        return s.size() > ret ? ret + 1 : ret;
    }
};