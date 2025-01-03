class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        
        long long total = 0;
        for(int i : nums)
        {
            total += i ;
        }
        long long pref = 0;
        int cnt = 0;

        for(int i=0; i< n - 1;i++)
        {
            pref += nums[i];
            long long sum = total - pref ;
            if(sum<= pref)
            {
                cnt++;
            }
        }

        return cnt ;
    }
};