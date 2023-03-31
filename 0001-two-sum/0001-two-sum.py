class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict={}
        for ind,ele in enumerate(nums):
            diff=target-ele
            if diff in dict:
                return [dict[diff],ind]
            else:
                dict[ele]=ind
            