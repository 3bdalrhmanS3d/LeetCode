class Solution {
public:
    int nthUglyNumber(int n) 
    {
        vector<int> vec(1691,0) ;
        
        vec[1] = 1 ;
        int i2 = 1 , i3 = 1, i5 = 1 ;
        for(int i = 2 ; i <= n ; i++)
        {
            int nextI2 = vec[i2] * 2 ;
            int nextI3 = vec[i3] * 3 ;
            int nextI5 = vec[i5] * 5 ;

            int ugly = min({nextI2, nextI3, nextI5}) ;
            vec[i] = ugly ;

            if (ugly == nextI2) ++i2;
            if (ugly == nextI3) ++i3;
            if (ugly == nextI5) ++i5;
        }
        return vec[n] ;
    }

    
    void ugly()
    {
        
    }
};