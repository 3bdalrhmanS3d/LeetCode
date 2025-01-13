public class Solution {
    public int[] TwoSum(int[] nums, int target) {

        for(int i =0 ; i < nums.Length ; i++)
        {
            int x = nums[i];
            int ter = target - x ;
            for(int j = 0 ; j < nums.Length; j++)
            {
                if(i != j && nums[j] == ter )
                {
                    return new int[] { i, j };
                }
            }
        }

        return new int[0] ;
    }
}