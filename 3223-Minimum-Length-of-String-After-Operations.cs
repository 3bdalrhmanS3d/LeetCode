public class Solution {
    public int MinimumLength(string s) {
        int ans = s.Length ;
        int[] freq = new int[26];

        foreach(char c in s)
        {
            freq[c - 'a']++;
            if(freq[c - 'a'] != 1 && freq[c - 'a'] % 2 == 1)
            {
                ans-=2 ;
            }
        }

        return ans ;
    }
}