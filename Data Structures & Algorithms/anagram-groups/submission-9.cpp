class Solution {
public:
    vector<vector<string>> groupAnagrams(const vector<string> &strs) {
        unordered_map<string, vector<string>> groups;

        for (const string &str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            groups[key].push_back(str);
        }

        vector<vector<string>> result;
        result.reserve(groups.size());

        for (auto &entry : groups) {
            result.push_back(move(entry.second));
        }

        return result;
    }
};
