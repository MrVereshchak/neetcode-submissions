class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # 3
        res = defaultdict(list)

        for st in strs:
            count = [0] * 26
            for ch in st:
                count[ord(ch.lower()) - ord('a')] += 1
            res[tuple(count)].append(st)
        
        return list(res.values())


        # # 2
        # res = {}

        # for st in strs:
        #     sorted_st = ''.join(sorted(st))
        #     if sorted_st not in res:
        #         res[sorted_st] = [st]
        #     else:
        #         res[sorted_st].append(st)
        
        # return list(res.values())
        
        # # 1
        # collection = {}
        # flipped = {}

        # for idx, st in enumerate(strs):
        #     collection[idx] = {el: st.count(el) for el in st}
        #     collection[idx] = tuple(sorted(collection[idx].items()))
        
        # for key, value in collection.items():
        #     if value not in flipped.keys():
        #         flipped[value] = [strs[key]]
        #     else:
        #         flipped[value].append(strs[key])

        # return list(flipped.values())
            




        