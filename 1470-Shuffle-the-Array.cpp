class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> newNums ;
        for(int i= 0 ; i < n ; i++)
        {
            newNums.push_back(nums[i] ) ;
            newNums.push_back( nums[i+n]) ;
        }

        return newNums ;
    }
};