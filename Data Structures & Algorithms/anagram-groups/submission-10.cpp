class Solution {
public:
    vector<vector<string>> groupAnagrams(const vector<string> &strs) {
        unordered_map<string, vector<string>> groups;

        for (const string &str : strs) {
            string key = createKey(str);
            groups[key].push_back(str);
        }

        vector<vector<string>> result;
        result.reserve(groups.size());

        for (auto &entry : groups) {
            result.push_back(move(entry.second));
        }

        return result;
    }

    string createKey(const string &str) {
        int counts[26] = {};
        string result = "";

        for(const char ch : str) {
            ++counts[ch - 'a'];
        }

        for(const int count : counts) {
            result += to_string(count);
            result += '#';
        }

        return result;
    }
};
