public class Solution
{
    public int CountSeniors(string[] details)
    {
        int cnt = 0;
        foreach(string s in details )
        {
           
            // 7868190130M7522
            // 01234567890
            string x = s.Substring(11, 2) ;
            int y =  int.Parse(x);
            if (y > 60)
            {
                cnt++;
            }

        }

        return cnt;

    }
}