class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        for i in nums:
            if i ==target:
                return i
            else:
                cmpti = target - nums[nums.index(i)]