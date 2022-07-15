class Solution {
private:
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    
    int n, m, vid;
    vector<vector<pair<bool, bool>>> oceans;
    vector<vector<int>> vis;
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        n = heights.size(), m = heights[0].size();
        vis = vector<vector<int>>(n, vector<int>(m));
        oceans = vector<vector<pair<bool, bool>>>(n, vector<pair<bool, bool>>(m));
        
        vid++;
        for (int i = 0; i < m; ++i) DFS(heights, 0, i, true, false);
        vid++;
        for (int i = 0; i < n; ++i) DFS(heights, i, 0, true, false);
        vid++;
        for (int i = 0; i < m; ++i) DFS(heights, n - 1, i, false, true);
        vid++;
        for (int i = 0; i < n; ++i) DFS(heights, i, m - 1, false, true);
        
        vector<vector<int>> ret;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (oceans[i][j].first && oceans[i][j].second) {
                    ret.push_back({i, j});
                }
            }
        }
        return ret;
    }
    
    void DFS(vector<vector<int>> &heights, int i, int j, bool pacific, bool atlantic) {
        if (vis[i][j] == vid) return;
        vis[i][j] = vid;
        oceans[i][j].first |= pacific;
        oceans[i][j].second |= atlantic;
        
        for (int k = 0; k < 4; ++k) {
            int x = i + dx[k], y = j + dy[k];
            if (valid(x, y) && heights[i][j] <= heights[x][y]) {
                DFS(heights, x, y, pacific, atlantic);
            }
        }
    }
    
    bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
};