class Solution {
public:
    int lengthOfLongestSubstring(const string s) {
        int maxCount = 0;
        int tempCount = 0;
        size_t pointer = 0;
        unordered_map<char, int> charMet;

        while (pointer < s.size()) {
            if(!charMet.contains(s[pointer])) {
                charMet[s[pointer]] = pointer;
                ++tempCount;
                maxCount = max(tempCount, maxCount);
            } else {
                pointer = charMet[s[pointer]];
                tempCount = 0;
                charMet = {};
            }
            ++pointer;
        }

        return maxCount;
    }
};
