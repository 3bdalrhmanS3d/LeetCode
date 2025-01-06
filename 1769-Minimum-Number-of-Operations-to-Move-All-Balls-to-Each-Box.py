class Solution(object):
    def minOperations(self, boxes):
        n = len(boxes)
        answer = [0] * n
        count = 0  
        ops = 0 
        
        # Left-to-right pass
        for i in range(n):
            answer[i] += ops
            count += int(boxes[i])
            ops += count
        
        count = 0
        ops = 0
        
        # Right-to-left pass
        for i in range(n - 1, -1, -1):
            answer[i] += ops
            count += int(boxes[i])
            ops += count
            
        return answer
            