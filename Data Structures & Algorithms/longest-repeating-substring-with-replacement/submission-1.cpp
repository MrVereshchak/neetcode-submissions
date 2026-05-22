class Solution {
public:
    int max (const int arr[26]) {
            int _best = 0;
            for (int i = 0; i < 26; ++i) {
                if (arr[i] > _best) {
                    _best = arr[i];
                }
            }
            return _best;
        }

    int characterReplacement(string s, int k) {
        int l = 0,
            r = 0,
            maxLength = 0,
            wLength = 0,
            best = 0;

        int freqCount[26] = {};

        ++freqCount[s[r] - 65];
        maxLength = 1;
        wLength = 1;
        best = 1;

        while (r < s.length()-1) {
            if ((wLength - maxLength) <= k) {
                ++r; //
                ++freqCount[s[r] - 65];
                maxLength = max(freqCount);
                ++wLength;
                if ((wLength - maxLength) <= k) {
                    best = (best > (wLength)) ? best : (wLength);
                }
            } else {
                --freqCount[s[l] - 65];
                ++l;
                --wLength;
            }
            std::cout << "l:" << l << " r:" << r << std::endl;
            std::cout << "best: " << best 
            << " wL: " << wLength  
            << " mL: " << maxLength << " "
            << freqCount[0] << freqCount[1]
            << std::endl;
        } 

        return best;
    }
};
