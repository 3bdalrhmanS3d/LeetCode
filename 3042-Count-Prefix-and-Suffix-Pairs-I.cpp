class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int cnt = 0 ;
        for(int i =0 ; i < n ;i++)
        {
            
            for(int j = i + 1 ; j < n ; j++)
            {
                
                if(isPrefixAndSuffix(words[i] , words[j]))
                {
                    cnt++ ;
                }
            }
        }

        return cnt ;
    }

    bool isPrefixAndSuffix(string str1, string str2)
    {
        int len1 = str1.size();
        int len2 = str2.size();

        if(len1 > len2) return false ;

        if(str1 != str2.substr(0, len1)) return false ;

        if(str1 != str2.substr(len2 - len1, len1)) return false;

        return true ;
    }
};