class Solution {
public:
    bool checkInclusion(const string &s1, const string &s2) {
        array<int, 26> s1Counts = {};
        array<int, 26> s2WindowCounts = {};

        for (char ch : s1) {
            ++s1Counts[ch - 97];
        }

        int l = 0;
        for (int r = 0; r < s2.size(); ++r) {
            ++s2WindowCounts[s2[r] - 97];

            if((r - l + 1) == s1.size()) {
                if (s2WindowCounts == s1Counts) {
                    return true;
                }

                --s2WindowCounts[s2[l] - 97];
                ++l;
            }
        }

        return false;
    }
};
