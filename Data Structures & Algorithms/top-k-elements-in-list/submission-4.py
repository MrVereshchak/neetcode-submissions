class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        res = []

        cnt = {el: nums.count(el) for el in nums}

        print(cnt)

        print(max(cnt, key=cnt.get), 'lol')

        for i in range(k):
            res.append(max(cnt, key=cnt.get))
            del cnt[max(cnt, key=cnt.get)]

        print(res)
        return res