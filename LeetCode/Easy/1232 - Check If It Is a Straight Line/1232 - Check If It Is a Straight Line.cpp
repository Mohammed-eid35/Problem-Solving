class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if (n < 3) return true;
        
        for (int i = 2; i < n; ++i) {
            if (!valid(coordinates[0], coordinates[1], coordinates[i])) {
                return false;
            }
        }
        return true;
    }
    
    bool valid(vector<int> &p1, vector<int> &p2, vector<int> &p3) {
        return (
            (p1[0] - p2[0]) * (p1[1] - p3[1])
            ==
            (p1[1] - p2[1]) * (p1[0] - p3[0])
        );
    }
};