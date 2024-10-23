public class Solution
{
    public bool LemonadeChange(int[] bills)
    {
        int fiveD = 0, tenD = 0;

        foreach (int bill in bills)
        {
            switch (bill)
            {
                case 5:
                    fiveD++;
                    break;

                case 10:
                    if (fiveD > 0)
                    {
                        fiveD--;
                        tenD++;
                    }
                    else
                    {
                        return false;
                    }
                    break;

                case 20:
                    if (fiveD > 0 && tenD > 0)
                    {
                        fiveD--;
                        tenD--;
                    }
                    else if (fiveD >= 3)
                    {
                        fiveD -= 3;
                    }
                    else
                    {
                        return false;
                    }
                    break;
            }
        }

        return true;
    }
}
