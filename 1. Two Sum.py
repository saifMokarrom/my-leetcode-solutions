class Solution(object):
    def twoSum(self, nums, target):
        leng = len(nums)
        dict = {}
        for i in xrange(0, leng):
            val = nums[i]
            if (target - val) in dict:
                return (dict[target - val], i)
            dict[val] = i


