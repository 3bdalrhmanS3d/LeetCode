class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int, int> numsF ;
        
        for(int num : nums)
        {
            numsF[num]++ ;
        }

        vector<int> R ;
        for (const auto& entry : numsF) 
        {
            R.push_back(entry.first) ;
            int x = entry.second ;
            while(--x)
            {
                R.push_back(entry.first) ;
            }
        }

        return R ;
    }
};