class Solution {
public:
    vector<int> dailyTemperatures(const vector<int> &temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<size_t> unresolvedIdx;

        for (size_t i = 0; i < temperatures.size(); ++i) {
            while(!unresolvedIdx.empty() && temperatures[unresolvedIdx.top()] < temperatures[i]) {
                result[unresolvedIdx.top()] = i - unresolvedIdx.top();
                unresolvedIdx.pop();
            }

            unresolvedIdx.push(i);
        }
        
        return result;
    }
};
