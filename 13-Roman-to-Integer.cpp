class Solution {
public:
    int romanToInt(string s) {
        int cnt = 0 ; 
        unordered_map<char, int> romanValues = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        for(int i =0 ; i < s.size() ; i++ )
        {
            
            if(romanValues[s[i]] < romanValues[s[i+1]] && i + 1 < s.size())
            {
                cnt -= romanValues[s[i]] ;
            }
            else
            {
                cnt += romanValues[s[i]] ;
            }
            //i++ ;
        }

        return cnt ;
    }
};