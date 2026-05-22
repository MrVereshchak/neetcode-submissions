class Solution {
public:
    vector<vector<string>> groupAnagrams(const vector<string>& strs) {
        if (strs.empty()) {
            return {{""}};
        }

        unordered_map<string, vector<string>> lookup;
        int chOccurance;
        vector<vector<string>> ans;


        for (const string &word: strs) {
            // cout << word << endl;

            string code(26, '0');
            
            for (const char &c: word) {
                code[c - 'a']++;
            }
            
            // cout << code << endl;

            lookup[code].push_back(word);

            // for (string w: lookup[code]) {
            //     cout << code << " " << w << endl;
            // }

            code.clear();
        }

        for (auto &pair: lookup) {
            ans.push_back(std::move(pair.second));
        }

        return ans;
    }
};
