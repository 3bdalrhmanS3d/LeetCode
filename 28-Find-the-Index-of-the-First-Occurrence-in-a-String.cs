class Solution
{
    public int StrStr(string haystack, string needle)
    {
        int indx = -1;

        int sizeA = haystack.Length, sizeB = needle.Length;

        if (sizeA < sizeB)
        {
            return -1;
        }
        //
        //       
        for (int i = 0; i <= sizeA - sizeB; i++)
        {
            int j;
            for (j = 0; j < sizeB; j++)
            {
                if (haystack[i + j] != needle[j])
                {
                    break;
                }
            }
            if (j == sizeB)
            {
                return i;
            }
        }


        return indx;
    }
}
