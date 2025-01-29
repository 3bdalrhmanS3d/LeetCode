from math import factorial

class Solution(object):
    def generate(self, x):
        res = []  
        for i in range(x):
            row = []  # Store the current row
            for j in range(i + 1):
                row.append(factorial(i) // (factorial(j) * factorial(i - j)))
            res.append(row)  # Add the full row to the result
        return res  
