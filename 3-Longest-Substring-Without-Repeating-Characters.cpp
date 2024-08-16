class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int>LastSeen(256, -1) ;
        int mx = 0, cnt=0;
        for(int i=0; i < s.size(); i++)
        {
            if(LastSeen[s[i]] >= cnt)
            {
                cnt = LastSeen[s[i]] + 1 ;
            }   

            LastSeen[s[i]] = i ;

            mx = max(mx , i - cnt + 1 ) ;
        }

        return mx ;
        
    }
};