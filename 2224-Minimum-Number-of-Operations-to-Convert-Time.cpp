class Solution {
public:
    int convertTime(string current, string correct) {
        // current[0] ===> char ! 
        // int( current[0] - '0' ) * 
        int cur = int( current[0] - '0' ) * 10 + int( current[1] - '0' ) ;
        cur *= 60 ;
        cur += int( current[3] - '0' ) * 10  + int( current[4] - '0' ) ;

        int cor = int( correct[0] - '0' ) * 10 + int( correct[1] - '0' ) ;
        cor *= 60 ;
        cor += int( correct[3] - '0' ) * 10  + int( correct[4] - '0' ) ;

        int total = cor - cur ;

        int cnt  = 0 ;
        cnt += (total / 60) ; total %= 60 ;
        cnt += (total / 15) ; total %= 15 ;
        cnt += (total / 5) ; total %= 5 ;
        cnt += total ;

        return cnt ;
    }
};