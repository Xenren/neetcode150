class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        fs = {}
        for i in range(len(nums)):
            if target - nums[i] in fs:
                return [i, fs[target - nums[i]]]
            fs[nums[i]] = i
