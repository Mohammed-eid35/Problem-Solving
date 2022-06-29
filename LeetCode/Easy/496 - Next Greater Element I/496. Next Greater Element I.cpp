class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        map<int, int> nxtGreater;
        for (int i = n - 1; ~i; --i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums2[i] < nums2[j]) {
                    nxtGreater[nums2[i]] = nums2[j];
                    break;
                }
                if (nums2[i] < nxtGreater[nums2[j]]) {
                    nxtGreater[nums2[i]] = nxtGreater[nums2[j]];
                    break;
                }
            }
            if (!nxtGreater[nums2[i]]) nxtGreater[nums2[i]] = -1;
        }

        vector<int> ret;
        for (auto num : nums1) ret.push_back(nxtGreater[num]);
        return ret;
    }
};