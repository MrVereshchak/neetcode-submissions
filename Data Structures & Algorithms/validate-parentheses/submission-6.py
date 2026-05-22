class Solution:
    def isValid(self, s: str) -> bool:
        while '()' in s or '{}' in s or '[]' in s:
            s = s.replace('()', '') 
            s = s.replace('{}', '') 
            s = s.replace('[]', '') 
        return s == ''

        # ans = None

        # if (len(s) % 2 != 0):
        #     ans = False
        # else:   
        #     voc = {
        #         '(': [],
        #         ')': [],
        #         '[': [],
        #         ']': [],
        #         '{': [],
        #         '}': []
        #     }
        #     s = list(s)
        #     lol1 = 0
        #     lol2 = 0
        #     lol3 = 0
            
        #     for idx, el in enumerate(s):
        #         voc[el].append(idx)

        #     logic_0 = True
            
        #     if voc['('] and voc[')']:
        #         diff_1 = [x - y for x, y in zip(voc['('], voc[')'])]
        #         for num in diff_1:
        #             if num > 0:
        #                 logic_0 = False
        #                 break
        #         lol1 = sum(voc['('] + voc[')'])
        #     if voc['['] and voc[']']:
        #         diff_2 = [x - y for x, y in zip(voc['['], voc[']'])]
        #         for num in diff_2:
        #             if num > 0:
        #                 logic_0 = False
        #                 break
        #         lol2 = sum(voc['['] + voc[']'])
        #     if voc['{'] and voc['}']:
        #         diff_3 = [x - y for x, y in zip(voc['{'], voc['}'])]
        #         for num in diff_3:
        #             if num > 0:
        #                 logic_0 = False
        #                 break
        #         lol3 = sum(voc['{'] + voc['}'])

        #     logic_1 = ((lol1 == 0 or lol1 % 2 != 0) and (lol2 == 0 or lol2 % 2 != 0) and (lol3 == 0 or lol3 % 2 != 0))
        #     logic_2 = (len(voc['(']) == len(voc[')']) and len(voc['[']) == len(voc[']']) and len(voc['{']) == len(voc['}']))

        #     print(logic_0, logic_1, logic_2)

        #     if logic_0 and logic_1 and logic_2:
        #         ans = True
        #     else: ans = False 
        # return ans
            
        