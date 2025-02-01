class Solution {
public:
    bool isArraySpecial(vector<int>& n) {
        int sz = n.size();
        for(int i =1;i< sz ;i++)
        {
            if(n[i] % 2 == n[i-1] % 2)
            {
                return false ;
            }
        }

        return true ;
    }
};