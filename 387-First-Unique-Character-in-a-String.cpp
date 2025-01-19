class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for( auto ch : s)
        {
            mp[ch]++;
        }
        int sz = s.size();
        for (int i = 0; i < sz ; i++)
        {
            if(mp[s[i]] == 1)
            {
                return i;
            }
        }

        return -1;

    }
};