class Solution {
public:
    
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size() ;
        vector<int> charts(n+1,0) ;

        for(const auto & shift : shifts)
        {
            int l = shift[0], r = shift[1], dir = shift[2];

            if (dir == 1) { 
                charts[l] += 1;
                charts[r + 1] -= 1;
            } 
            else 
            { 
                charts[l] -= 1;
                charts[r + 1] += 1;
            }
        }

        int shiftSum = 0;

        for (int i = 0; i < n; i++) 
        {
            shiftSum += charts[i];
            s[i] = (s[i] - 'a' + shiftSum % 26 + 26) % 26 + 'a';
        }

        return s ;

    }


};