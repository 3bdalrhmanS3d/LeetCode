class Solution 
{
    public int findNumbers(int[] nums) 
    {
        int cnt = 0 ;
        for(int i : nums)
        {
            if( numsOfdig(i) % 2 == 0)
            {
                cnt++ ;
            }
        }
        
        return cnt ;
    }
    
    public static int numsOfdig(int num) 
    {
        if (num == 0) 
        {
            return 1;
        }
        return (int) Math.floor(Math.log10(Math.abs((double) num)) + 1);
    }
}