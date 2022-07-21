class NumArray {
private:
    vector<int> prefixSum;
    int prefixSumSize;
public:
    NumArray(vector<int>& nums) {
        int numsSize = nums.size();
        prefixSumSize = numsSize + 1;
        prefixSum = vector<int> (prefixSumSize);
        for (int i = 1; i <= numsSize; ++i) {
            prefixSum[i] = nums[i - 1] + prefixSum[i - 1];
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */