class Solution {
public:
    string minWindow(const string &s, const string &t) {
        if (t.size() > s.size()) {
            return "";
        }

        array<int, 128> targetCounts = {};
        array<int, 128> windowCounts = {};
        int required = 0;
        int formed = 0;
        int bestLength = INT_MAX;
        int bestStart = 0;
        int l = 0;
        int r = 0;

        for (char ch : t) {
            if (targetCounts[ch] == 0) {
                ++required;
            }

            ++targetCounts[ch];
        }

        while (r < static_cast<int>(s.size())) {
            ++windowCounts[s[r]];

            if (targetCounts[s[r]] > 0 && targetCounts[s[r]] == windowCounts[s[r]]) {
                ++formed;
            }

            while (formed == required) {
                if (bestLength > (r - l + 1)) {
                    bestLength = r - l + 1;
                    bestStart = l;
                }

                --windowCounts[s[l]];
                if (targetCounts[s[l]] > 0 && windowCounts[s[l]] < targetCounts[s[l]]) {
                    --formed;
                }
                ++l;
            }
            
            ++r;
        }


        return bestLength == INT_MAX ? "" : s.substr(bestStart, bestLength);
    }
};
