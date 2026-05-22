class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = [[] for _ in range(len(nums) + 1)]
        cnt = {}
        res = []

        for num in nums:
            cnt[num] = 1 + cnt.get(num, 0)

        for key, count in cnt.items():
            freq[count].append(key)

        for i in range(len(freq)-1, 0, -1):
            for num in freq[i]:
                res.append(num)
                if len(res) == k:
                    return res

        
        # res = []
        # cnt = {el: nums.count(el) for el in nums}

        # for i in range(k):
        #     res.append(max(cnt, key=cnt.get))
        #     del cnt[max(cnt, key=cnt.get)]

        # return res