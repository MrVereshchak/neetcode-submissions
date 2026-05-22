# Definition for a pair.
# class Pair:
#     def __init__(self, key: int, value: str):
#         self.key = key
#         self.value = value
class Solution:
    def insertionSort(self, pairs: List[Pair]) -> List[List[Pair]]:
        res = []

        if len(pairs) == 0:
            return res

        for i in range(1, len(pairs)):
            res.append(pairs.copy())
            j = i - 1
            while (j >= 0 and pairs[j+1].key < pairs[j].key):
                temp = pairs[j+1]
                pairs[j+1] = pairs[j]
                pairs[j] = temp
                j -= 1

        res.append(pairs.copy())
        # print([(pairs[i].key, pairs[i].value) for i in range(len(pairs))])
        return res

        # 5, 6, 2, 9
        #    j  i
        # 5, 2, 6, 9
        # j     i
