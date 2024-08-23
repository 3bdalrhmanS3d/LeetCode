class Solution {
    public void reverseString(char[] s) {
        int x = 0 ;
        int y = s.length - 1;
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