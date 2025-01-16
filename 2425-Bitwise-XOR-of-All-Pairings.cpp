class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int xorNums1 = 0, xorNums2 = 0;

        for (int num : nums1) {
            xorNums1 ^= num;
        }
        for (int num : nums2) {
            xorNums2 ^= num;
        }

        int result = 0;
        if (n1 % 2 == 1) {
            result ^= xorNums2; 
        }
        if (n2 % 2 == 1) {
            result ^= xorNums1; 
        }

        return result;
    }
};