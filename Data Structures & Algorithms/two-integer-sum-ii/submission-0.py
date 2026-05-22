class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
    #   r, l = 0, 1

        for r in range(len(numbers) - 1): 
            for l in range(r + 1, len(numbers)):
                if numbers[r] + numbers[l] == target:
                    return [r + 1, l + 1]

        return False