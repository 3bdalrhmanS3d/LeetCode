class Solution(object):
    def luckyNumbers(self, matrix):
        row_mins = [min(row) for row in matrix]
        
        col_maxs = [max(matrix[i][j] for i in range(len(matrix))) for j in range(len(matrix[0]))]
        
        lucky_numbers = []
        
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == row_mins[i] and matrix[i][j] == col_maxs[j]:
                    lucky_numbers.append(matrix[i][j])
        
        return lucky_numbers
