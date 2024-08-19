class Solution {
    public int[] sortedSquares(int[] nums) 
    {
        
        int x = 0 ;
        for(int i: nums)
        {
            nums[x] = i * i ;
            x++ ;
        }
        
        Arrays.parallelSort(nums);
        return nums;

    }
}