class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq ;
        for(const auto& i : words)
        {
            freq[i]++;
        }
        vector<pair<string, int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            if (a.second == b.second) {
                return a.first < b.first; 
            }
            return a.second > b.second;
        });

        vector<string> vecR;
        for (int i = 0; i < k; ++i) {
            vecR.push_back(vec[i].first);
        }

        return vecR;

        
    }
};