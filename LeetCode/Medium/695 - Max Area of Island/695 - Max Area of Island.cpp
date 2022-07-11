class Solution {
private:
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    int n, m;
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        int mx = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j]) {
                    mx = max(mx, DFS(grid, i, j));
                }
            }
        }
        return mx;
    }
    
    int DFS(vector<vector<int>> &grid, int i, int j) {
        if (!valid(i, j) || !grid[i][j]) return 0;
        grid[i][j] = 0;
        
        int ret = 1;
        for (int k = 0; k < 4; ++k) {
            ret += DFS(grid, i + dx[k], j + dy[k]);
        }
        return ret;
    }
    
    bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
};