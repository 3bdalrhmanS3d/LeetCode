class Solution {
public:
    int stoneGameII(vector<int>& piles) 
    {
        int arr[101][101] ;
        int sum[101] ;
        int n = piles.size() ;
        memset(arr, 0, sizeof(arr)) ;
        memset(sum, 0, sizeof(sum)) ;

        sum[n-1] = piles[n -1] ;
        for(int i = n - 2 ; i >= 0; i--)
        {
            sum[i] = piles[i] + sum[i+1] ;
        }

        for(int i = n - 1 ; i >= 0; i--)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                if( i + j * 2 >= n )
                {
                    arr[i][j] = sum[i] ;
                }
                else
                {
                    for(int x = 1; x <= 2* j; x++)
                    {
                        arr[i][j] = max(arr[i][j]  , sum[i] - arr[i + x][max(j, x)]);
                
                    } 

                }
            }
        }

        return arr[0][1];

    }
};