class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):

        binary_string = format(n, '032b')
        reversed_string = binary_string[::-1]

        return int(reversed_string , 2)

        