

class Solution
{
    public:
        int finalPositionOfSnake(int n, vector<string>& commands)
        {
            int ind = 0, ii =0 , jj = 0 ;
            for(int i =0 ; i < commands.size() ; i++)
            {
                string s = commands[i] ;
                char c = s[0] ;
                switch(c)
                {
                    case 'U' :
                        ii-- ;
                        break ;
                    case 'D' :
                        ii++ ;
                        break ;
                    case 'L' :
                        jj-- ;
                        break ;
                    case 'R' :
                        jj++;
                        break ;
                }
                
            }
            
            return (( ii * n ) + jj) ;
        }
};