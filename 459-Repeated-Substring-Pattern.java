class Solution {
    public boolean repeatedSubstringPattern(String s) 
    {
        int n = s.length() ;
        for(int i =1 ; i <= n / 2 ; i++)
        {
            if(n % i == 0 )
            {
                String sub = s.substring(0, i) ;
                if(check(s, sub))
                {
                    return true;
                }
            }
        }

        return false ;
    }

    private boolean check(String s, String sub)
    {
        int rep = s.length() / sub.length() ;

        return sub.repeat(rep).equals(s) ;
    }
}