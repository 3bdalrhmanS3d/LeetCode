using System.Text;

public class Solution
{
    public string MakeFancyString(string s)
    {
        StringBuilder str = new StringBuilder();
        str.Append(s[0]);
        int cnt = 1;

        for (int i = 1; i < s.Length; i++)
        {
            if (s[i] == s[i - 1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }

            if (cnt < 3)
            {
                str.Append(s[i]);
            }
        }

        return str.ToString();
    }
}
