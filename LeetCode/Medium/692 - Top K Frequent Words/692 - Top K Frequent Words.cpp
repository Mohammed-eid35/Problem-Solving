class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> fr;
        vector<string> vc;
        for (string word : words) {
            if (!fr[word]) vc.push_back(word);
            fr[word]++;
        }
        
        
        sort(vc.begin(), vc.end(), [&](string &s1, string &s2) {
            int n1 = fr[s1], n2 = fr[s2];
            if (n1 != n2) return n1 > n2;
            return s1 < s2;
        });
        
        while (vc.size() != k) vc.pop_back();
        
        return vc;
    }
};