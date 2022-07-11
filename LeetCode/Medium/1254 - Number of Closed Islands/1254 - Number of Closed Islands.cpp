class Solution {
private:
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    int n, m;
public:
    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        int counter = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!grid[i][j]) {
                    counter += DFS(grid, i, j);
                }
            }
        }
        return counter;
    }
    
    bool DFS(vector<vector<int>> &grid, int i, int j) {
        if (!valid(i, j)) return false;
        if (grid[i][j]) return true;
        grid[i][j] = 1;
        
        bool ret = true;
        for (int k = 0; k < 4; ++k) {
            ret &= DFS(grid, i + dx[k], j + dy[k]);
        }
        return ret;
    }
    
    bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
};