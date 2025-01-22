class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> setOfJewels ;
        for(int i =0 ; i < jewels.size(); i++)
        {
            setOfJewels.insert(jewels[i]);
        }
        int cnt = 0;
        for(int i =0 ; i < stones.size();i++ )
        {
            if( setOfJewels.count(stones[i]) )
            {
                cnt++ ;
            }
        }

        return cnt;
    }
};