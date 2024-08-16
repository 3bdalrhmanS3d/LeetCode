class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result(2) ;
        int comp = 0 ;
        for(int i =0 ; i < nums.size(); i++)
        {
            comp = target - nums[i] ;
            for(int j = 0; j < nums.size(); j++)
            {
                if(i != j && nums[j] == comp )
                {
                    return { i , j} ;
                }
            }


        }
        return {} ;
    }
};