class Solution {
private:
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    int n, m;
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        n = grid2.size(), m = grid2[0].size();
        int counter = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid2[i][j]) {
                    counter += DFS(grid1, grid2, i, j);
                }
            }
        }
        return counter;
    }
    
    bool DFS(vector<vector<int>> &grid1, vector<vector<int>> &grid2, int i, int j) {
        if (!valid(i, j) || !grid2[i][j]) return true;
        
        bool ret = (grid1[i][j] == grid2[i][j]);
        grid2[i][j] = 0;
        for (int k = 0; k < 4; ++k) {
            ret &= DFS(grid1, grid2, i + dx[k], j + dy[k]);
        }
        return ret;
    }
    
    bool valid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
};