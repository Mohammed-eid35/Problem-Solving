class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            int onesA = countOnesInBinary(a);
            int onesB = countOnesInBinary(b);

            if (onesA == onesB) 
                return a < b;

            return onesA < onesB;
        });
        return arr;
    }
    
    static int countOnesInBinary(int num) {
        int counter = 0;
        while (num) {
            counter += (num & 1) ;
            num >>= 1;
        }
        return counter;
    }
};