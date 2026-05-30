class Solution {
public:
    vector<int> topKFrequent(const vector<int> &nums, int k) {
        unordered_map<int, int> frequencies;

        for (const int num : nums) {
            ++frequencies[num];
        }

        priority_queue<pair<int, int>> orderedFreq;

        for (const auto &[num, freq] : frequencies) {
            orderedFreq.push({freq, num}); 
        }

        vector<int> result;
        result.reserve(k);
        
        for (int i = 0; i < k; ++i) {
            result.push_back(orderedFreq.top().second);
            orderedFreq.pop();
        }

        return result;
    }
};
