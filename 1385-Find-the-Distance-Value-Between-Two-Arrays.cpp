class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        int result = 0 ;
        for ( int i =0 ; i < arr1.size() ; i++ )
        {
            int ind = 0 ;
            bool f = true ;
            for ( int j =0 ; j < arr2.size() ; j++)
            {
                if( abs(arr1[i] - arr2[j] ) <= d)
                {
                    f = false ;
                    break ;
                }
            }
            if(f)
            {
                result++ ;
            }
            
        }
        return result ;
    }
    
};