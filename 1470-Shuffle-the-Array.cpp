class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> newNums(n*2) ;
        for(int i = 0 ; i < n ; i++)
        {
            newNums[i * 2] = ( nums[i] ) ;
            newNums[i * 2 + 1] = ( nums[i+n]) ;
        }

        return newNums ;
    }
};