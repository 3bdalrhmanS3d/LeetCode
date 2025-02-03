class Solution {
public:
    int findClosestNumber(vector<int>& n) {
        int x = n[0];
        int sz = n.size();
        int mn = abs(n[0]);

        for(int i = 1; i < sz; i++) {
            int xx = abs(n[i]);
            if(xx < mn) {
                mn = xx;
                x = n[i];
            } 
            else if(xx == mn) 
            {
                if(n[i] > x) 
                {
                    x = n[i];
                }
            }
        }

        return x;
    }
};