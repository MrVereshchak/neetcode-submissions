class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = {}

        for st in strs:
            sorted_st = ''.join(sorted(st))
            if sorted_st not in res:
                res[sorted_st] = [st]
            else:
                res[sorted_st].append(st)
        
        return list(res.values())
        
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
            




        