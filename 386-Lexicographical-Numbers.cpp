class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            nums[i] = i + 1;
        }

        sort(nums.begin(), nums.end(), [](int a, int b) {
            string s1 = to_string(a);
            string s2 = to_string(b);
            return s1 < s2;
        });

        return nums;
    }
};