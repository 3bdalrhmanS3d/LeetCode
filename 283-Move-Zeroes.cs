public class Solution
{
    public void MoveZeroes(int [] nums)
    {
        int zero = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] != 0)
            {
                nums[zero++] = nums[i];
            }
            
        }
        for(int i = zero; i < nums.Length; i++) { nums[i] = 0; }
    }
}