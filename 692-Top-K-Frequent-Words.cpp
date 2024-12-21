class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector< pair<string, int> > vec ;
        vector<string> vecR ;
        
        for(auto i : words )
        {
            bool found =  false ;
            for( auto & pair : vec)
            {
                if(pair.first == i )
                {
                    pair.second++;
                    found = true;
                    break;
                }
            }
            
            if(!found)
            {
                vec.push_back({i, 1});
            }

        }
        sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            if (a.second == b.second) {
                return a.first < b.first; 
            }
            return a.second > b.second;
        });

        for( int i = 0; i < k && i < vec.size(); i++)
        {
            vecR.push_back( vec[i].first );
        }
        return vecR;
    }
};