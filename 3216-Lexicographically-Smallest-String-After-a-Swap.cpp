class Solution {
public:
    string getSmallestString(string s) {
        int sz = s.size();
        for (int i = 0; i < sz - 1; i++) {
           int cur = s[i] - '0' ;
           int next = s[i + 1 ] - '0' ;

           if( (cur % 2 ==0 && next % 2 == 0) || (cur % 2 ==1 && next % 2 == 1) )
           {
                if(cur >next)
                {
                    swap(s[i] , s[i+1]);
                    break;
                }
           }
        }

        return s ;

        
    }
};