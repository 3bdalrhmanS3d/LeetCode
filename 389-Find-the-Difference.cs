
class Solution
{
    public char FindTheDifference(string s, string t)
    {
        char c=(char)0;
            int i, size = s.Length;
            for (i = 0; i < size; ++i) {
                c^=s[i];
                c^=t[i]; 
            }
            c^=t[i];
            return c;
        
    }
}


