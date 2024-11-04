class Solution {
public:
    int minOperations(vector<string>& logs) {

        int cnt =0 ;
        string fol ="";
        for(int i =0 ; i < logs.size() ; i++ )
        {
            fol = logs[i] ;
            
            if( fol == "../")
            {
                if(cnt > 0)
                {
                    cnt--;
                }
                else
                {
                    cnt = cnt ;
                }
            }
            else if ( fol != "./")
            {
                cnt++ ;
            }
            
        }

        return cnt ;
    }
};