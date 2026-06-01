class Solution {
public:
    vector<int> productExceptSelf(const vector<int> &nums) {
        int nSize = nums.size();
        vector<int> result(nSize, 1);

        for (int i = 1; i < nSize; ++i) {
            result[i] = result[i-1] * nums[i-1];
        }

        int rightMult = 1;
        for (int i = nSize-1; i >= 0; --i) {
            result[i] = result[i] * rightMult;

            rightMult *= nums[i];
        }

        return result;
    }
};

// [1, 2, 3, 4] - nums
// [1, 1, 2, 6] - first loop result
//  1, 4, 12, 24 - rightMult
// [24, 12, 8, 6] - final result
