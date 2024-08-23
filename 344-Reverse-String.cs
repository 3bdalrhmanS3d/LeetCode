public class Solution {
    public void ReverseString(char[] s) 
    {
        int x = 0 ;
        int y = s.Length - 1;
        while(x < y)
        {
            char c = s[y] ;
            s[y] = s[ x ] ;
            s[x] = c ;

            x++ ;
            y-- ;
        }
    }
}