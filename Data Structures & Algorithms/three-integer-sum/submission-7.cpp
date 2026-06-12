class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        for (size_t i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                break;
            }
            
            if (i > 0 && nums[i - 1] == nums[i]) {
                continue;
            }

            size_t leftPoint = i + 1;
            size_t rightPoint = nums.size() - 1;

            while (leftPoint < rightPoint) {
                int checkSum = nums[i] + nums[leftPoint] + nums[rightPoint];

                if (checkSum > 0) {
                    --rightPoint;
                } else if (checkSum < 0) {
                    ++leftPoint;
                } else if (checkSum == 0) {
                    result.push_back({ nums[i], nums[leftPoint], nums[rightPoint] });
                    --rightPoint;
                    ++leftPoint;

                    while (nums[rightPoint] == nums[rightPoint + 1] && leftPoint < rightPoint) {
                        --rightPoint;
                    } 

                    while (nums[leftPoint] == nums[leftPoint - 1] && leftPoint < rightPoint) {
                        ++leftPoint;
                    }
                }
            }
        }

        return result;
    }
};


