class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        list=[]
        cursum=0
        for i in range(len(nums)):
            cursum=cursum+nums[i]
            list.append(cursum)
        return list