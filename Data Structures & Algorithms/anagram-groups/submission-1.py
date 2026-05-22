class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        collection = {}
        flipped = {}

        for idx, st in enumerate(strs):
            collection[idx] = {el: st.count(el) for el in st}
            collection[idx] = tuple(sorted(collection[idx].items()))
        
        for key, value in collection.items():
            if value not in flipped.keys():
                flipped[value] = [strs[key]]
            else:
                flipped[value].append(strs[key])
        
        return [value for value in flipped.values()]
            




        