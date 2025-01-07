class Solution(object):
    def stringMatching(self, words):
        result = []

        for i in words :
            for j in words :
                if i in j and i != j :
                    result.append(i)
                    break
        
        return result
        