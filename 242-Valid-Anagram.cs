public class Solution
{
    public bool IsAnagram(string s, string t)
    {
        int[] freq = new int[26];
        int sizeS = s.Length, sizeT = t.Length;

        if (sizeT != sizeS)
        {
            return false;
        }


        for (int i = 0; i < sizeS; i++)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
}