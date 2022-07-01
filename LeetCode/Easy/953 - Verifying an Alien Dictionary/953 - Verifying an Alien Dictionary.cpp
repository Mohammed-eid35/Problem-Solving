class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> fr(26);
        for (int i = 0; i < 26; ++i) fr[order[i] - 'a'] = i;

        int n = words.size();
        for (int i = 1; i < n; ++i) {
            if (!compare(fr, words[i], words[i - 1])) {
                return false;
            }
        }
        return true;
    }
    
    bool compare(vector<int> fr, string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size(), n = min(n1, n2);
        for (int i = 0; i < n; ++i) {
            if (fr[word1[i] - 'a'] != fr[word2[i] - 'a']) {
                return (fr[word1[i] - 'a'] > fr[word2[i] - 'a']);
            }
        }
        return (n1 >= n2);
    };
};