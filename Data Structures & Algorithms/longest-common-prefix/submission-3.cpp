class Solution {
public:
    string longestCommonPrefix(const vector<string>& strs) {
        if (strs.empty()) {
            return "";
        } 

        string ans;

        for (int i = 0; i < strs.at(0).size(); ++i) {
            char ch = strs.at(0).at(i);

            for (int j = 0; j < strs.size(); ++j) {
                if (i >= strs.at(j).size() || strs.at(j).at(i) != ch) {
                    return ans;
                }
            }
             
            ans.push_back(ch);
        }

        return ans;
    }
};