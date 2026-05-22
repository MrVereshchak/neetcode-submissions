class Solution {
public:
    string longestCommonPrefix(const vector<string>& strs) {
        if (strs.empty()) {
            return "";
        } 

        string ans;

        for (int i = 0; i < strs.at(0).size(); ++i) {
            char ch = strs.at(0).at(i);

            cout << "Ch: " << ch << endl; 

            for (int j = 0; j < strs.size(); ++j) {
                //cout << "Check:" << strs.at(j).at(i) << endl;

                if (i >= strs.at(j).size() || strs.at(j).at(i) != ch) {
                    return ans;
                }
            }
             
            ans.push_back(ch);
        }

        return ans;
    }
};