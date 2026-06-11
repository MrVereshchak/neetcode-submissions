class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> answer;

        sort(nums.begin(), nums.end());

        // for (int num : nums) {
        //     cout << num << ", ";
        // }

        // cout << endl;

        for (size_t i = 0; i < nums.size(); ++i) {
            int leftPoint = i + 1;
            int rightPoint = nums.size() - 1;
            
            if (i > 0 && nums[i - 1] == nums[i]) {
                // cout << "skipped fixed: " << i << ", " << leftPoint << ", " << rightPoint << endl;
                continue;
            }

            // cout << "fixed: " << i << ", " << leftPoint << ", " << rightPoint << endl;

            while (leftPoint < rightPoint) {
                if ((nums[leftPoint] + nums[rightPoint]) > ((-1) * nums[i])) {
                    --rightPoint;
                    // cout << "right: " << i << ", " << leftPoint << ", " << rightPoint << endl;
                    while (nums[rightPoint] == nums[rightPoint + 1] && leftPoint < rightPoint) {
                        --rightPoint;
                        // cout << "skipped right: " << i << ", " << leftPoint << ", " << rightPoint << endl;
                    }
                } else if ((nums[leftPoint] + nums[rightPoint]) < ((-1) * nums[i])) {
                    ++leftPoint;
                    // cout << "left: " << i << ", " << leftPoint << ", " << rightPoint << endl;
                    while (nums[leftPoint] == nums[leftPoint - 1] && leftPoint < rightPoint) {
                        ++leftPoint;
                        // cout << "skipped left: " << i << ", " << leftPoint << ", " << rightPoint << endl;
                    }
                } else if ((nums[leftPoint] + nums[rightPoint]) == ((-1) * nums[i])) {
                    // cout << "answer: " << nums[i] << ", " << nums[leftPoint] << ", " << nums[rightPoint] << " at: " << i << ", " << leftPoint << ", " << rightPoint << endl;
                    answer.push_back({ nums[i], nums[leftPoint], nums[rightPoint] });
                    --rightPoint;
                    ++leftPoint; 

                    while (nums[rightPoint] == nums[rightPoint + 1] && leftPoint < rightPoint) {
                        --rightPoint;
                        // cout << "skipped right: " << i << ", " << leftPoint << ", " << rightPoint << endl;
                    } 

                    while (nums[leftPoint] == nums[leftPoint - 1] && leftPoint < rightPoint) {
                        ++leftPoint;
                        // cout << "skipped left: " << i << ", " << leftPoint << ", " << rightPoint << endl;
                    }
                }
            }
        }

        return answer;
    }
};


