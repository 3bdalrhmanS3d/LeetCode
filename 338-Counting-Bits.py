class Solution(object):
    def countBits(self, n):
        ones_vector = []
        for i in range(n+ 1):  
            ones_vector.append(bin(i).count('1'))  
        return ones_vector