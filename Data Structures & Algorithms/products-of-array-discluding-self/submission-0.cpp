class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int numsSize = nums.size();
        vector<int> prefix(numsSize), postfix(numsSize), result(numsSize);

        prefix[0] = 1;
        for (int i = 1; i < numsSize; ++i) {
            int k = nums[i - 1] * prefix[i - 1];
            prefix[i] = k;
        }
        
        postfix[numsSize - 1] = 1;
        for (int i = 1; i < numsSize; ++i) {
            int k = nums[numsSize - i] * postfix[numsSize - i];
            postfix[numsSize - i - 1] = k;
        }
   
        for (int i = 0; i < numsSize; ++i) {
            result[i] = prefix[i] * postfix[i];
        }

        // for (int num: prefix) {
        //     cout << num << ' ';
        // }
        // cout << endl;

        // for (int num: postfix) {
        //     cout << num << ' ';
        // }
        // cout << endl;
        
        return result;
    }
};