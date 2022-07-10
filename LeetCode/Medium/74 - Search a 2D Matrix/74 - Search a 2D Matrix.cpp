class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int lo = 0, hi = n * m - 1, mid, cur;
        while (lo <= hi) {
            mid = lo + ((hi - lo) >> 1);
            cur = matrix[mid / m][mid % m];

            if (cur == target) 
                return true;
            if (cur > target) 
                hi = mid - 1;
            else 
                lo = mid + 1;
        }
        return false;
    }
};