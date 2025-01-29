class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        set<int> s ;
        int sz = n.size(), ss = 1;
        for(int i =1 ; i < sz ; i++)
        {
            if(n[i] != n[i-1])
            {
                n[ss] = n[i] ;
                ss++;
            }
        }

        return ss;
    }
};