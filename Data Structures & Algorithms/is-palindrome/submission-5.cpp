class Solution {
public:
    bool isPalindrome(string s) {
        for (auto it = s.begin(); it != s.end(); ) {
            if(!isalnum(static_cast<unsigned char>(*it))) {
                it = s.erase(it);
            } else {
                *it = tolower(static_cast<unsigned char>(*it));
                ++it;
            }
        }

        int middleIdx = s.size()/2;

        cout << middleIdx << endl;

        if(s.size() % 2 != 0) {
            s.erase(middleIdx, 1);
        }

        reverse(s.begin(), s.begin() + middleIdx);

        cout << s.substr(0, middleIdx) << endl;
        cout << s.substr(middleIdx, middleIdx) << endl;

        return (s.substr(0, middleIdx) == s.substr(middleIdx, middleIdx));
    }
};
