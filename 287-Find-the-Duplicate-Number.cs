public class Solution {
    public int FindDuplicate(int[] nums) 
    {
        int[] arr = new int[100002] ;
        int x = 0 ;
        for(int i =0 ; i < nums.Length ; i++)
        {
            arr[nums[i]]++ ;
        }
        
        for(int i =1;i <= 100002; i++)
        {
            if(arr[i]>1)
            {
                x = i ;
                break;
            }

        }

        return x ;
    }

    
}