class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
        {
            return s ;
        }

        vector< string> rows( numRows) ;
        int cul =0 ;
        bool down = false ;
        for(char c : s)
        {
            rows[cul] += c ;
            if(cul == 0 || cul == numRows - 1)
            {
                down = !down ;
            }
            cul += down ? 1 : -1 ;

        }
        string finall = \\ ;
        for(string ss : rows)
        {
            finall += ss ;
        }

        return finall ;
    }
};