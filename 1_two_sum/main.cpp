class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for i, val in enumerate(nums):
            rem = target - val
            if rem in d:
                return [d[rem], i]
            d[val] = i
