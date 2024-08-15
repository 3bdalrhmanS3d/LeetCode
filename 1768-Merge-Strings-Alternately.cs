class Solution
{
    public string MergeAlternately(string word1, string word2)
    {
        
        int i = 0, j = 0;
        string result = "";

        while (i < word1.Length || i < word2.Length )
        {
            if( i < word1.Length )
            {
                result += word1[i] ;
            }

            if( i < word2.Length )
            {
                result += word2[i] ;
            }
            i++ ;
        }

        return result;
    }
}