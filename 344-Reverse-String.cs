public class Solution {
    public void ReverseString(char[] s) 
    {
        int x = s.Length;
        for(int i = 0 ; i < x / 2 ; i++ )
        {
            char c = s[i] ;
            s[i] = s[ x - i - 1] ;
            s[x - i- 1] = c ;
        }
    }
}