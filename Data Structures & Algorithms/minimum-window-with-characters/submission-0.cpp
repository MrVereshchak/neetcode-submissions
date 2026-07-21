class Solution {
public:
    string minWindow(const string &s, const string &t) {
        array<int, 128> targetCounts = {};
        array<int, 128> windowCounts = {};
        int target = 0;
        int formed = 0;
        int bestLength = INT_MAX;
        int bestStart = 0;
        int l = 0;
        int r = 0;
        string result = "";

        for (char ch : t) {
            if (targetCounts[ch] == 0) {
                ++target;
            }

            ++targetCounts[ch];
        }

        while (r < s.size()) {
            ++windowCounts[s[r]];

            if (targetCounts[s[r]] > 0 && targetCounts[s[r]] == windowCounts[s[r]]) {
                ++formed;
            }

            while (formed == target && l < s.size()) {
                if (bestLength > (r - l + 1)) {
                    bestLength = r - l + 1;
                    bestStart = l;
                    result = s.substr(bestStart, bestLength);
                }

                --windowCounts[s[l]];
                if (targetCounts[s[l]] > 0 && targetCounts[s[l]] > windowCounts[s[l]]) {
                    --formed;
                }
                ++l;
            }
            
            ++r;
        }


        return result;
    }
};
