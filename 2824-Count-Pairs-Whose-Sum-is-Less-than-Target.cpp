class Solution {
public:
    int countPairs(vector<int>& n, int t) {
        
        int sz= n.size(), cnt =0;
        for(int i =0; i < sz;i++)
        {
            for(int j = i + 1; j < sz ; j++)
            {
                if(n[i] + n[j] < t)
                {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};