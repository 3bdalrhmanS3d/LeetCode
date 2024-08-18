class Solution {
public:
    bool isMonotonic(vector<int>& nums)
    {
        if( is_sorted_asc(nums) || is_sorted_desc(nums) )
        {
            return true ;
        }

        return false ;
    }
    bool is_sorted_asc(const std::vector<int>& vec) {
    return std::is_sorted(vec.begin(), vec.end());  }

    bool is_sorted_desc(const std::vector<int>& vec) {
        return std::is_sorted(vec.begin(), vec.end(), std::greater<int>());  }
};