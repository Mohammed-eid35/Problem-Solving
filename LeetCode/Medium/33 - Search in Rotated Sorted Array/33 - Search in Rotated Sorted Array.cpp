class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size(), lo = 0, hi = n - 1, mid, m;
        while (lo < hi) {
            mid = lo + ((hi - lo) >> 1);
            if (nums[mid] > nums[hi])
                lo = mid + 1;
            else 
                hi = mid;
        }
        int rotateIndex = lo;
        lo = 0; hi = n - 1;
        while (lo <= hi) {
            m = lo + ((hi - lo) >> 1);
            mid = (m + rotateIndex) % n;
            if (nums[mid] == target) 
                return mid;
            if (nums[mid] < target) 
                lo = m + 1;
            else 
                hi = m - 1;
        }
        return -1;
    }
};