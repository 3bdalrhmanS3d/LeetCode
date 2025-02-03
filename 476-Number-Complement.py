class Solution(object):
    def findComplement(self, num):

        n = (bin(num))
        n = n[2:]
        newn = ''

        for i in n :
            if i == '1':
                newn += '0' 
            else:
                newn += '1' 


        return int(newn , 2) 
        