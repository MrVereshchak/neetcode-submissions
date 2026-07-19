class Solution {
public:
    int lengthOfLongestSubstring(const string &s) {
        int l = 0;
        int r = 0;
        int maxCount = 0;
        unordered_map<char, int> charMet;
        
        while (r < s.size()) {
            if(charMet.contains(s[r]) && charMet[s[r]] >= l) {
                l = charMet[s[r]] + 1; 
            }

            maxCount = max(maxCount, r - l + 1);
            charMet[s[r]] = r;
            ++r;
        }

        return maxCount;
    }
};
