class Solution {
    public void duplicateZeros(int[] arr) 
    {
        int size = arr.length;
        for (int i = 0; i < size - 1; i++) 
        {
            if (arr[i] == 0) 
            {
                for (int j = size - 1; j > i; j--) 
                {
                    arr[j] = arr[j - 1];
                }
                arr[i + 1] = 0;
                i++;
            }
        }
    }
}