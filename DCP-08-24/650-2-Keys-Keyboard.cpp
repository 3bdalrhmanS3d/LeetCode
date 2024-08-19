class Solution {
public:
    int minSteps(int n) {
        if( n == 1 )
        {
            return 0 ;
        }

        int result = 0 ;
        for(int  i= 2; i <= sqrt(n) ; i++)
        {
            while( n % i == 0)
            {
                result += i ;
                n /= i ;

            }
        }

        if( n > 1)
        {
            result += n ;
        }

        return result ;
    }
};