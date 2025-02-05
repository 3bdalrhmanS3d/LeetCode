class Solution {
public:
    int singleNumber(vector<int>& n) {
        
        sort(n.begin(),n.end());
        for(int i = 1 ; i< n.size();i+=2)
        {
            if(n[i] != n[i-1])
            {
                return n[i-1] ;
            }
        }

        return n[n.size() - 1] ;
    }
};