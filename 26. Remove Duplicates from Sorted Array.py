class Solution(object):
    def removeDuplicates(self, nums):
        length = 1
        for i in range(1,len(nums)):
            if (nums[i] != nums[i-1]):
                nums[length] = nums[i]
                length += 1
        return length