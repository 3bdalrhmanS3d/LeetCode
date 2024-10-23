public class Solution {
    public bool CheckInclusion(string s1, string s2) 
    {
        int lenS1 = s1.Length, lenS2 = s2.Length;

        if (lenS1 > lenS2)
            return false;


        int[] s1Count = new int[26];
        int[] windowCount = new int[26];

        for (int i = 0; i < lenS1; i++)
        {
            s1Count[s1[i] - 'a']++;
            windowCount[s2[i] - 'a']++;
        }

        if (AreArraysEqual(s1Count, windowCount))
            return true;

        for (int i = lenS1; i < lenS2; i++)
        {
            windowCount[ s2[i - lenS1] - 'a']--;

            windowCount[s2[i] - 'a']++;

            if (AreArraysEqual(s1Count, windowCount))
            {
                return true;
            }
        }

        return false;
    }

    private static bool AreArraysEqual(int[] arr1, int[] arr2)
    {
        for (int i = 0; i < 26; i++)
        {
            if (arr1[i] != arr2[i])
                return false;
        }
        return true;
    }
}