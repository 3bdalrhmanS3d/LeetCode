class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> pref(words.size(), 0);
        vector<int> result ;
        string s = "" ;
        
        for(int i =0 ; i < words.size() ; i++)
        {
            s = words[i];
            int x = checkFirstLastVowel(s) ? 1 : 0 ;

            pref[i] = (i > 0 ? pref[i-1] : 0 )+ x ;
        }

        for( const auto& query : queries)
        {
            int l = query[0];
            int r = query[1];

            int cnt = pref[r] - (l > 0 ? pref[l -1] : 0 ) ;

            result.push_back(cnt) ;
        }

        return result ;
    }

    bool isVowel(char c) 
    {
        char vowels[] = {'a', 'e', 'i', 'o', 'u'};
        for (char v : vowels) {
            if (c == v) return true;
        }
        return false;
    }

    bool checkFirstLastVowel(const string& word) {
        
        return isVowel(word[0]) && isVowel(word[word.length() - 1]);
    }
};