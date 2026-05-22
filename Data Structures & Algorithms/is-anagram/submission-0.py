class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        cnt_s = {ch: s.count(ch) for ch in s}
        cnt_t = {ch: t.count(ch) for ch in t}

        return cnt_s == cnt_t

        