class Solution {
public:
    int longestMonotonicSubarray(vector<int>& n) {
        int mx = 1, mn = 1, sz = n.size();
        int cntMax = 1, cntMin = 1;

        for(int i=1; i < sz ;i++ )
        {
            if(n[i] > n[i-1])
            {
                cntMax++;
                cntMin=1;
            }
            else if(n[i] < n[i-1])
            {
                cntMin++;
                cntMax=1;
            }
            else
            {
                cntMax=1;
                cntMin=1;
            }

            mx = max(mx, cntMax); 
            mn = max(mn, cntMin); 
        }

        return  max(mx, mn) ;
    }
};