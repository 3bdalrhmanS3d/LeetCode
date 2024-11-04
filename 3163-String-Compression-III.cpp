class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int i = 0;
        
        while (i < word.size()) 
        {
            char currentChar = word[i];
            int count = 0;
            
            while (i < word.size() && word[i] == currentChar && count < 9) {
                count++;
                i++;
            }
            
            comp += to_string(count) + currentChar;
        }
        
        return comp;
    }
};
