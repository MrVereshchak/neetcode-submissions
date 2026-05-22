class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int L = 0; L < nums.size() - 1; L++) {
            for (int R = L + 1; R < nums.size(); R++) {
                if (nums[L] + nums[R] == target) {
                    return vector<int>{L, R};
                }
            }
        }
    }
};
