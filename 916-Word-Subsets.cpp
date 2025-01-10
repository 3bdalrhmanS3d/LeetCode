class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> result;
        unordered_map<char, int> maxFreq;

        
        for (const string &word : words2) {
            unordered_map<char, int> freq;
            for (char ch : word) {
                freq[ch]++;
                maxFreq[ch] = max(maxFreq[ch], freq[ch]);
            }
        }

        for (const string& word : words1) {
            if (isUniversal(word, maxFreq)) {
                result.push_back(word);
            }
        }

        return result;
    }

private:
    bool isUniversal(const string& word, const unordered_map<char, int>& maxFreq) {
        unordered_map<char, int> freq;

        for (char ch : word) {
            freq[ch]++;
        }

        for (const auto& [ch, count] : maxFreq) {
            if (freq[ch] < count) {
                return false;
            }
        }

        return true;
    }
};
