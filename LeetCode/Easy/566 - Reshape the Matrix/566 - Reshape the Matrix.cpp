class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if (mat.size() * mat[0].size() != r * c) return mat;
        
        vector<vector<int>> vc(r, vector<int>(c));
        int i = 0, j = 0;
        for (auto row : mat) {
            for (auto element : row) {
                vc[i][j] = element;
                j++;
                if (j == c) {
                    i++;
                    j = 0;
                }
            }
        }
        return vc;
    }
};