class Solution {
public:
    int singleNumber(vector<int>& n) {
        
        int result = 0;
        for(auto i : n)
        {
            result ^= i;
        }

        return result;
    }
};