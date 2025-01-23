class Solution {
public:
    int countServers(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();

        vector<int> r(n, 0); 
        vector<int> c(m, 0); 

        for(int i =0; i < n ;i++)
        {
            for(int j =0 ; j < m ;j++)
            {
                if(g[i][j]==1)
                {
                    r[i]++;
                    c[j]++;
                }
            }
        } 

        int cnt =0;
        for(int i=0; i< n;i++)
        {
            for(int j =0 ; j < m;j++)
            {
                if(g[i][j]==1)
                {
                    if(g[i][j] == 1 && (r[i] > 1 || c[j] > 1))
                    {
                        cnt++ ;
                    }
                }
            }
        }

        return cnt;
    }
};