class Solution {
public:
    vector<vector<string>> groupAnagrams(const vector<string> &strs) {
        vector<vector<string>> results;
        std::map<std::array<int, 26>, int> hists;
        int sub_array_cnt = 0;

        for (const string &str : strs) {
            std::array<int, 26> hist = {};
            for (const char &ch : str) {
                ++hist[ch - 'a'];
            }
            if (!hists.contains(hist)) {
                hists[hist] = sub_array_cnt;
                ++sub_array_cnt; 
                results.push_back({});
            } 

            results[hists[hist]].push_back(str);
        }

        return results;
    }
};

// ["act","pots","tops","cat","stop","hat"]
// a: 1, c: 1, t: 1, position: 0
// new dict
// 0, 1 


// output_array = [["act"]]
// output_array = [["act"], ["pots"]]
// output_array = [["act"], ["pots", "tops"]]
// output_array = [["act", "cat"], ["pots", "tops"]]
// output_array = [["act", "cat"], ["pots", "tops", "stop"]]
// output_array = [["act", "cat"], ["pots", "tops", "stop"], ["hat"]]

// create an output_array
//
// for each word in strings
//      compare the hist of the string against an esxisting hists
//      if there's no the same hist
//          add new hist to the dict of hists
//          add the string to a new subarray
//      else 
//          add the string to an existing subarray 

// return output_array

// m words
// n letters
// Time: O(m*n)
// Memory: O(2m)


// ["act","pots","tops","cat","stop","hat"]
// ["act","cat","tops","pots","stop","hat"]
// ["act","cat","tops","pots","stop","hat"]
// Time: O((m^2)/2 * n)
// Memory: O(1)





