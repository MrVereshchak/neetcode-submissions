class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sl_wind = []
        max_count = 0
        
        for ch in s:
            while ch in sl_wind:
                sl_wind.pop(0)
            
            sl_wind.append(ch)
            max_count = max(max_count, len(sl_wind))
            
        return max_count