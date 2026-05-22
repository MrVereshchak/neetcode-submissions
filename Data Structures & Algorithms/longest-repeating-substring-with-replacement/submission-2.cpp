class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0,
            bestLength = 0,
            wLength = 0,
            maxFreq = 0;

        int counts[26] = {};

        for (int right = 0; right < s.length(); ++right) {
            ++counts[s[right] - 'A'];
            maxFreq = *std::max_element(counts, counts + 26);
            wLength = right - left + 1;

            

            while (wLength - maxFreq > k) {
                --counts[s[left] - 'A'];
                maxFreq = *std::max_element(counts, counts + 26);
                ++left;
                wLength = right - left + 1;
            }

            bestLength = std::max(bestLength, wLength);
        }

        return bestLength;
    }
};
