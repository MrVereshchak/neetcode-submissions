class Solution {
public:
    vector<vector<string>> groupAnagrams(const vector<string>& strs) {
        if (strs.empty()) {
            return {{""}};
        }

        unordered_map<string, vector<string>> lookup;
        string code;
        int chOccurance;
        vector<vector<string>> ans;


        for (const string &word: strs) {
            cout << word << endl;

            for (char ch = 'a'; ch <= 'z'; ++ch) {
                chOccurance = std::count(word.begin(), word.end(), ch);

                if (chOccurance) {
                    code += ch;
                    code += std::to_string(chOccurance);
                    //cout << code << endl;
                }

                //cout << ch << " " << chOccurance << endl;
            }

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
