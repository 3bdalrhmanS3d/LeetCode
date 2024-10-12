public class Solution {
    public bool IsPalindrome(int x) {
        if(x < 0 )
        {
            return false ;
        }
        else
        {
            int newX = 0, r = 0, oldX = x ;
            while(x >0 )
            {
                r = x % 10 ;
                newX = newX * 10 + r ;
                x /= 10 ;
            }

            if( oldX == newX)
            {
                return true ;
            }
            else
            {
                return false ;
            }
        }
    }
}