class Solution {
public:
    int buildChar(int chCount[26])
    {
        int cnt = 0 ;
        for(int i =0 ; i < 26;i++)
        {
            if(chCount[i])
            {
                cnt++;
                chCount[i]--;

                cnt += buildChar(chCount);

                chCount[i]++;
            }
        }

        return cnt;
    }

    int numTilePossibilities(string t) {
        int chCount[26] = {0} ;
        for(char ch : t )
        {
            chCount[ch - 'A']++;
        }

        return buildChar(chCount);
    }

    
};