class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        prev_map = {}

        for i, n in enumerate(nums):
            diff = target - n
            if diff in prev_map:
                return [prev_map[diff], i]
            prev_map[n] = i
        
        return []
        
        
        # idxs = {n: i for i, n in enumerate(nums)}

        # for i, n in enumerate(nums):
        #     diff = target - n
        #     if diff in idxs and idxs[diff] != i:
        #         return [i, idxs[diff]]
        
        # return []
        
        # for i in range(len(nums)-1):
        #     for j in range(i+1, len(nums)):
        #         if nums[i] + nums[j] == target:
        #             return [i, j]
        
        # return False
