class Solution {
private:
    vector<int> dx = {0,  0, 1, -1};
    vector<int> dy = {1, -1, 0,  0};
    int n, m;
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        n = maze.size(), m = maze[0].size();
        queue<vector<int>> qu;
        qu.push({entrance[0], entrance[1], 0});
        while (!qu.empty()) {
            vector<int> U = qu.front();
            qu.pop();
            
            if ((U[0] != entrance[0] || U[1] != entrance[1]) && isExit(U[0], U[1])) {
                return U[2];
            }
            for (int k = 0; k < 4; ++k) {
                vector<int> V = {U[0] + dx[k], U[1] + dy[k], U[2] + 1};
                if (isValid(V[0], V[1]) && maze[V[0]][V[1]] == '.') {
                    maze[V[0]][V[1]] = '+';
                    qu.push(V);
                }
            }
        }
        
        return -1;
    }
    
    bool isValid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
    
    bool isExit(int i, int j) {
        return i == 0 || i == n - 1 || j == 0 || j == m - 1;
    }
};