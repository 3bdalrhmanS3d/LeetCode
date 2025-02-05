class Solution {
public:
    int countPairs(vector<int>& n, int t) {
        sort(n.begin(),n.end());
        int i =0 , j = n.size() - 1, cnt =0;
        while(i < j)
        {
            int sum = n[i] + n[j] ;

            if(sum < t)
            {
                cnt += j - i ;
                i++;
            }
            else
            {
                j-- ;
            }
        }

        return cnt;
    }
};