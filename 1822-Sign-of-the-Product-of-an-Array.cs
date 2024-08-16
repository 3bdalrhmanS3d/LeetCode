public class Solution
{
    public int ArraySign(int[] nums)
    {
        int pos = 0, neg = 0, zeros = 0;
        int x = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            x = nums[i];
            if(x == 0) { return 0; }
            else if(x > 0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }

        if(neg > 0 && neg % 2 == 1) { return -1; }

        return 1;

    }
}