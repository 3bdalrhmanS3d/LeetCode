class Solution {
public:
    bool canConstruct(string s, int k) {
        int sz = s.size();
        if(sz < k)
        {
            return false ;
        }

        vector<int> v(26,0);

        for(int i =0 ; i < sz; i++)
        {
            v[s[i] - 'a']++ ;
        }

        int cnt =0;
        for(int i =0 ; i < 26 ; i++)
        {
            if(v[i]>0 && v[i] % 2 == 1)
            {
                cnt++;
            }
        }
        if(cnt > k)
        {
            return false ;
        }


        return true ;
    }
};