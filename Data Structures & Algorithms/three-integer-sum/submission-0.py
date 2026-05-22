class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        sorted_nums = sorted(nums)
        res = []

        # print(sorted_nums)

        for l in range(len(nums) - 2):
            if l < 0 and sorted_nums[l] == sorted_nums[l - 1]:
                continue

            m, r = l + 1, len(nums) - 1

            while m < r:
                curr_sum = sorted_nums[l] + sorted_nums[m] + sorted_nums[r]
                
                if curr_sum < 0:
                    m += 1
                elif curr_sum > 0:
                    r -= 1
                else:
                    if [sorted_nums[l], sorted_nums[m], sorted_nums[r]] not in res:
                        res.append([sorted_nums[l], sorted_nums[m], sorted_nums[r]])

                    m += 1
                    r -= 1

            l += 1
        return res

         