class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (auto num = nums.begin(); num != nums.end(); ++num){
            result ^=  *num; 
        }

        return result;
    }
};
