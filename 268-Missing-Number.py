class Solution(object):
    def missingNumber(self, nums):
        
        nums.sort()
        for i in range(0, len(nums) ):
            if i != nums[i] :
                return i 
        
        return len(nums)
        