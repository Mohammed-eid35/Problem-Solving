class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size();
        string ret = "";
        for (int i = n - 1; ~i; --i) {
            int x;
            if (s[i] == '#') {
                x = (s[i - 1] - '0') + ((s[i - 2] - '0') * 10) - 1;
                i -= 2;
            }
            else {
                x = (s[i] - '0') - 1;
            }
            ret += (char)(x + 'a');
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};