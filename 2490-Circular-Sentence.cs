public class Solution {
    public bool IsCircularSentence(string sentence) {
        
        if(sentence[0] != sentence[sentence.Length - 1])
        {
            return false ;
        }
        for(int i =0 ; i <sentence.Length ;i++ )
        {
            if( sentence[i] == ' ')
            {
                if (i == 0 || i == sentence.Length - 1)
                {
                    return false;
                }
                if(sentence[i-1] != sentence[i+1])
                {
                    return false ;
                }
            }
        }

        return true ;

    }
}