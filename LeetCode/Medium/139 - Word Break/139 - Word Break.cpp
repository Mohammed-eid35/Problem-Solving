class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        
        unordered_set<string> dict;
        for (string str : wordDict) dict.insert(str);
        
        vector<bool> vis(n);
        queue<int> qu;
        qu.push(0);
        while (!qu.empty()) {
            int i = qu.front();
            qu.pop();
            
            if (vis[i]) continue;
            vis[i] = true;
            
            string str = "";
            for (int j = i; j < n; ++j) {
                str += s[j];
                if (dict.count(str)) {
                    qu.push(j + 1);
                    if (j + 1 == n) return true;
                }
            }
        }
        
        return false;
    }
};