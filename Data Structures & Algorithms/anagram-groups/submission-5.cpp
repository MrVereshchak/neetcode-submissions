class Solution {
public:
    vector<vector<string>> groupAnagrams(const vector<string>& strs) {
        if (strs.size() == 0) {
            return {{""}};
        } 
        
        unordered_map<string, int> lookup;
        vector<vector<string>> ans;

        for (int i = 0; i < strs.size(); ++i) {
            string code;
            for (char target = 'a'; target <= 'z'; ++target) {

                int chCount = std::count(strs[i].begin(), strs[i].end(), target);

                if (chCount == 0) {
                    continue;
                }

                code.push_back(target);
                code += std::to_string(chCount);

                cout << code << endl;
            }

            auto it = lookup.find(code);

            if (it == lookup.end()) {
                lookup[code] = lookup.size();
                ans.push_back({});
                cout << lookup[code] << endl;
            }
            
            ans[lookup[code]].push_back(strs[i]);

            for (string w: ans[lookup[code]]) {
                cout << w << " ";
            }

            cout << endl;
        }

        return ans;
    }
};
