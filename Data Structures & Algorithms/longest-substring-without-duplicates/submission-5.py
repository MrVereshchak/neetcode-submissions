class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sl_wind = []
        max_count = 0
        
        for ch in s:
            
            if ch in sl_wind:
                while ch in sl_wind:
                    sl_wind.pop(0)
                sl_wind.append(ch)
            else:
                sl_wind.append(ch)
            
            max_count = max(max_count, len(sl_wind))
            print(sl_wind, len(sl_wind))

            
        return max_count
        
        # freq = {}
        # max_count = 0
        # curr_count = 0

        # for ch in s:
        #     print(ord(ch))
        #     if ord(ch) not in freq:
        #         freq[ord(ch)] = 1
        #     else:
        #         freq[ord(ch)] += 1            
        #         curr_count = 0
        #     curr_count += 1
        #     max_count = max(max_count, curr_count)
        # return max_count
