class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = binarySearch(nums, target);
        int e = binarySearch(nums, target + 1) - 1;
        int n = nums.size();
        if (s < 0 || e < 0 || s >= n || e >= n || nums[s] != target) return {-1, -1};
        return {s, e};
    }
    
    int binarySearch(vector<int> &vc, int target) {
        int lo = 0, hi = vc.size() - 1, mid;
        while (lo <= hi) {
            mid = lo + ((hi - lo) >> 1);
            
            if (vc[mid] < target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        return lo;
    }
};