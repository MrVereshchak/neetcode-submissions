class Solution {
public:
    bool isPalindrome(const string &s) {
        int l = 0;
        int r = static_cast<int>(s.size()) - 1;

        while (l < r) {
            unsigned char lChar = s[l];
            unsigned char rChar = s[r];

            while ((l < r) && !isalnum(lChar)) {
                ++l;
                lChar = s[l];
            }

            while ((l < r) && !isalnum(rChar)) {
                --r;
                rChar = s[r];
            }

            if (tolower(rChar) != tolower(lChar)) {
                return false;
            }

            ++l;
            --r;
        }

        return true;
    }
};
