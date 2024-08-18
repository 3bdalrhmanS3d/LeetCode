class Solution {
public:

    long long reverse(long long x) {
        long long newX = 0 ;
        if( x < 0 )
        {
            long long y ;
            x *= -1 ;
            while(x > 0 )
            {
                y = x % 10 ;
                x /= 10 ;
                if ((newX > INT_MAX / 10) || (newX < INT_MIN / 10))
                { return 0; }
                newX = newX * 10 + y ; 
            }

            return newX * -1 ;

        }
        else 
        {
            long long y ;
            //x *= -1 ;
            while(x > 0 )
            {
                y = x % 10 ;
                x /= 10 ;
                if ((newX > INT_MAX / 10) || (newX < INT_MIN / 10))
                { return 0; }
                newX = newX * 10 + y ; 
            }            
        }

        return newX ;        
        
    }
    
};