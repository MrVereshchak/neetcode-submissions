class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> firstLine, secondLine;
        
        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); ++i) {
            firstLine[s[i]]++;
            secondLine[t[i]]++;
        }

        if (firstLine == secondLine) {
            return true;
        }
        else {
            return false;
        }
    }
};
