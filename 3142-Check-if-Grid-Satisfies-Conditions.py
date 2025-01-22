class Solution(object):
    def satisfiesConditions(self, g):
        r = len(g)
        c = len(g[0]) if r > 0 else 0 

        for i in range(r):
            for j in range(c):
                if i + 1 < r and g[i][j] != g[i+1][j]:
                    return False 

                if j +1 < c and g[i][j] == g[i][j+1]:
                    return False

        return True 
        