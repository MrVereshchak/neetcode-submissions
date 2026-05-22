class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;

        for (int i = 0; i < nums.size(); ++i) {
            indices[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            if (indices.count(diff) && indices[diff] != i) {
                return {i, indices[diff]};
            }
        }

        return {};

        
        // for (int L = 0; L < nums.size() - 1; L++) {
        //     for (int R = L + 1; R < nums.size(); R++) {
        //         if (nums[L] + nums[R] == target) {
        //             return vector<int>{L, R};
        //         }
        //     }
        // }
    }
};
