class Solution {
public:
    int characterReplacement(const string &s, const int k) {
        int l = 0;
        int r = 0;
        int maxSubstrLen = 0;
        int maxFreq = 0;
        unordered_map <char, int> charFreq;

        while (r < s.size()) {
            ++charFreq[s[r]];
            maxFreq = max(maxFreq, charFreq[s[r]]);

            while ((r - l + 1) - maxFreq > k) {
                --charFreq[s[l]];
                ++l;
            }

            maxSubstrLen = max(maxSubstrLen, (r - l + 1));
            ++r;
        }

        return maxSubstrLen;
    }
};
