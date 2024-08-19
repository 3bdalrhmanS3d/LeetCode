class Solution {
    public int findMaxConsecutiveOnes(int[] nums)
    {
        int mx = 0 , cnt = 0;
        for(int i = 0 ; i < nums.length; i++)
        {
            //
            if( nums[i] == 1 )
            {
                cnt++;
                if(cnt > mx)
                {
                    mx = cnt ;
                }
            }
            else
            {
                
                
                cnt = 0 ;
            }
        }
        
        return mx ;
    }
}