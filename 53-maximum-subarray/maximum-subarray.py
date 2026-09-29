class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        curr=nums[0]
        Max=nums[0]
        n=len(nums)
        for i in range(1,n):
            curr=max(nums[i],curr+nums[i])
            Max=max(curr,Max)
        return Max