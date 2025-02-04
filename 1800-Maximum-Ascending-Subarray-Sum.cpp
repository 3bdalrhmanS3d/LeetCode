class Solution {
public:
    int maxAscendingSum(vector<int>& n) {
        
        int sum = n[0], sz = n.size(), mx = n[0];

        for(int i =1 ; i < sz;i++)
        {
            
            if(n[i] > n[i-1])
            {
                sum += n[i] ;
            }
            else
            { 
                sum = n[i];
            }
            mx = max(mx, sum) ;
        }

        return mx;
    }
};