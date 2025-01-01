class Solution(object):
    def maxScore(self, s):
        mxscore = 0
        for i in range(1, len(s)):
            left = s[:i]
            right = s[i:]

            score = left.count('0')+ right.count('1')

            mxscore = max( score, mxscore)

        return mxscore
        
        