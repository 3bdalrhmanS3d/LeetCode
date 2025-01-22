class Solution(object):
    def transpose(self, mat):
         
        transposed_mat = [[row[i] for row in mat] for i in range(len(mat[0]))]

        return transposed_mat 