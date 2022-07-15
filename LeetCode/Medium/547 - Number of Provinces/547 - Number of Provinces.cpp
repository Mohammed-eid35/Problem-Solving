class Solution {
public:
    int n;
    vector<bool> vis;
    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();
        vis = vector<bool>(n);
        
        int groups = 0;
        for (int i = 0; i < n; ++i) {
            if (!vis[i]) {
                DFS(isConnected, i);
                groups++;
            }
        }
        return groups;
    }
    
    void DFS(vector<vector<int>> &isConnected, int i) {
        if (vis[i]) return;
        vis[i] = true;
        for (int j = 0; j < n; ++j) {
            if (isConnected[i][j]) {
                DFS(isConnected, j);
            }
        }
    }
};