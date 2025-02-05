class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int cnt =0;
        int sz = s1.size();
        

        if(s1==s2)
        {
            return true;
        }

        vector<int> mis;

        for(int i =0 ; i < sz;i++)
        {
            if(s1[i] != s2[i])
            {
                cnt++ ;
                mis.push_back(i);
            }

            if(cnt>2)
            {
                return false;
            }
        }

        if(cnt==2)
        {
            return s1[mis[0]] == s2[mis[1]] && s1[mis[1]] == s2[mis[0]];
        }
        
        return false ;
    }
};