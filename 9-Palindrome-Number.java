class Solution {
    public boolean isPalindrome(int x) {
        if(x  < 0) return false  ;
        if( x >= 0 && x < 10 ) return true ;

        int numOfDigits = (int)Math.floor(Math.log10(x) + 1 ) ; //

        int[] digits = new int[numOfDigits] ;

        int i = 0;
        while(x > 0 )
        {
            int digit = x % 10 ;
            digits[i] = digit ;

            x = (int)Math.floor(x /10.0) ;
            i++ ;
        }

        int comp = (int)Math.floor(numOfDigits / 2.0) ;
        for(int j= 0 ; j < comp ; j++)
        {
            if(digits[j] != digits[numOfDigits - j -1 ])
            {
                return false ;
            
            }
        }

        return true ;
    }
}