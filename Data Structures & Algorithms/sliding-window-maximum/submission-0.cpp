class Solution {
public:
    vector<int> maxSlidingWindow(const vector<int> &nums, const int k) {
        size_t l = 0;
        size_t r = 0;
        const size_t windowSize = static_cast<size_t>(k);
        deque<size_t> maxCandidateIndices;
        vector<int> results;

        while (r < nums.size()) {
            while(!maxCandidateIndices.empty() && nums[maxCandidateIndices.back()] <= nums[r]) {
                maxCandidateIndices.pop_back();
            }

            maxCandidateIndices.push_back(r);

            while(!maxCandidateIndices.empty() && maxCandidateIndices.front() < l) {
                maxCandidateIndices.pop_front();
            }

            if ((r - l + 1) == windowSize) {
                results.push_back(nums[maxCandidateIndices.front()]);
                ++l;
            }

            ++r;
        }

        return results;
    }
};
