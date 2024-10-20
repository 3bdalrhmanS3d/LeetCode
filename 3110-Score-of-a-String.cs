public class Solution
{
    public int ScoreOfString(string s)
    {
        int Score = 0;
        for (int i = 0; i < s.Length - 1; i++)
        {
            
            Score += Math.Abs( s[i] - s[i + 1]);
        }
        return Score;
    }
}